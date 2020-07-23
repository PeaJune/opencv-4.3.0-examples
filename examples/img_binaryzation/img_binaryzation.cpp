#include "opencv2/opencv.hpp"
#include <iostream>
#include "opencv2/imgcodecs.hpp"


using namespace cv;
using namespace std;


int main(int argc, char **argv)
{

    Mat src=imread(argv[1], IMREAD_UNCHANGED);
    vector<uchar> buff;
    Mat dst;
    Mat bgr_src, gray;

    if(src.empty())
    {
        cout<<"read failed."<<endl;
        return -1;
    }
    
    /*jpg to bgr*/
    imencode(".jpg", src, buff);
    bgr_src = imdecode(Mat(buff), IMREAD_COLOR);
    

    namedWindow("input", WINDOW_AUTOSIZE);

    imshow("input", src);
    waitKey(1000);
    /*二值化*/
    threshold(src, dst, 170, 255, THRESH_BINARY);

    imshow("input", dst);

    waitKey(2000);

    /*color convert.*/
    cvtColor(bgr_src, gray, COLOR_BGR2GRAY);
    imshow("input", gray);

    waitKey(0);

    

    return 0;
}