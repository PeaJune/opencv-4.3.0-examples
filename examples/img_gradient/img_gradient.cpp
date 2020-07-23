#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>


using namespace cv;
using namespace std;


void tenengrad(Mat &img)
{
    Mat grey;
    Mat grey_sobel;
    double meanValue;

    cvtColor(img, grey, COLOR_BGR2GRAY);

    /*计算 x,y 方向梯度*/
    Sobel(grey, grey_sobel, CV_16U, 1, 1);
    meanValue = mean(grey_sobel)[0];

    convertScaleAbs(grey_sobel, grey_sobel, 1);

    stringstream meanValueStream;
    string meanValueString;
    meanValueStream << meanValue;
    meanValueStream >> meanValueString;
    meanValueString = "meanSobel: " + meanValueString;

    putText(img, meanValueString, Point(20, 100), FONT_HERSHEY_COMPLEX, 0.8, Scalar(0, 255, 0), 2);

    imshow("src", img);
    imshow("grey", grey);
    imshow("sobel", grey_sobel);

    waitKey();

    return;
}

void laplacian(Mat &img)
{
    Mat grey;
    Mat grey_sobel;
    double meanValue;

    cvtColor(img, grey, COLOR_BGR2GRAY);

    /*计算 Laplacian梯度*/
    Laplacian(grey, grey_sobel, CV_16U);
    meanValue = mean(grey_sobel)[0];

    convertScaleAbs(grey_sobel, grey_sobel, 1);

    stringstream meanValueStream;
    string meanValueString;
    meanValueStream << meanValue;
    meanValueStream >> meanValueString;
    meanValueString = "meanSobel: " + meanValueString;

    putText(img, meanValueString, Point(20, 100), FONT_HERSHEY_COMPLEX, 0.8, Scalar(0, 255, 0), 2);

    imshow("src", img);
    imshow("grey", grey);
    imshow("sobel", grey_sobel);

    waitKey();

    return;
}

/*均值 与 标准差*/
void standard_deviation(Mat &img)
{
    Mat grey;
    Mat grey_mean;
    Mat grey_sobel_stddev;
    double meanValue;

    cvtColor(img, grey, COLOR_BGR2GRAY);

    /*计算 Laplacian梯度*/
    meanStdDev(grey, grey_mean, grey_sobel_stddev);
    meanValue = grey_sobel_stddev.at<double>(0,0);

    stringstream meanValueStream;
    string meanValueString;
    meanValueStream << meanValue;
    meanValueStream >> meanValueString;
    meanValueString = "meanSobel: " + meanValueString;

    putText(img, meanValueString, Point(20, 100), FONT_HERSHEY_COMPLEX, 0.8, Scalar(0, 255, 0), 2);

    imshow("src", img);
    imshow("grey", grey);

    waitKey();

    return;
}

int main(int argc, char **argv)
{
    if(argc < 3)
    {
        cout<<"Usage: ./img_gradient <type> image_filename"<<endl;
        cout<<"type 1: tenengrad gradient.\n"
               "type 2: laplacian gradient\n"
               "type 3: standard deviation gradient"<<endl;
        return -1;
    }

    Mat src=imread(argv[2], IMREAD_COLOR);
    Mat dst;
    int type;
    if(src.empty())
    {
        cout<<"read failed."<<endl;
        return -1;
    }

    type = atoi(argv[1]);
    switch(type)
    {
        case 1: 
            tenengrad(src);
            break;
        case 2:
            laplacian(src);
            break;
        case 3:
            standard_deviation(src);
            break;
        default:
            cout<<"invalid paramter."<<endl;
            break;
    }

    return 0;
}