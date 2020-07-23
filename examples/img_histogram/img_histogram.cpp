#include "opencv2/opencv.hpp"
#include <iostream>


using namespace cv;
using namespace std;

/*单channel 均衡化*/
#if 0
int main(int argc, char **argv)
{

    Mat src=imread(argv[1]);
    Mat dst, dst1;
    
    if(src.empty())
    {
        cout<<"read failed."<<endl;
        return -1;
    }

    namedWindow("input", WINDOW_AUTOSIZE);
    namedWindow("binaryzation", WINDOW_AUTOSIZE);
    namedWindow("histogram", WINDOW_AUTOSIZE);

    imshow("input", src);
    cout<<"src channel: "<<src.channels()<<endl;

    cvtColor(src, dst, COLOR_BGR2GRAY);
    imshow("binaryzation", dst);
    int n_c = dst.channels();
    cout<<"channel:"<<n_c<<endl;


    /*均衡化*/
    equalizeHist(dst, dst1);

    imshow("histogram", dst1);

    waitKey(0);

    

    return 0;
}
#endif

/*多channel均衡化*/
int main(int argc, char **argv)
{

    Mat src = imread(argv[1]);
    Mat dst, dst1;

    if (src.empty())
    {
        cout << "read failed." << endl;
        return -1;
    }

    namedWindow("input", WINDOW_AUTOSIZE);
    namedWindow("histogram", WINDOW_AUTOSIZE);

    imshow("input", src);
    cout << "src channel: " << src.channels() << endl;

    vector<Mat> channels;

    split(src, channels);
    Mat blue, green, red;

    blue=channels.at(0);
    green=channels.at(1);
    red = channels.at(2);


    equalizeHist(blue,blue);
    equalizeHist(green, green);
    equalizeHist(red, red);

    merge(channels, dst);

    imshow("histogram", dst);

    waitKey(0);

    return 0;
}