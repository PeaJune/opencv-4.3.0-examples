#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <unistd.h>


using namespace cv;
using namespace std;


int main(int argc, char **argv)
{

    Mat src=imread(argv[1]);
    if(src.empty())
    {
        cout<<"read failed."<<endl;
        return -1;
    }
    Mat t_img, dst_img1, dst_img2;

    t_img = src;
    imshow("show",t_img);
    waitKey(1000);
    resize(t_img, dst_img1, Size(t_img.cols/2, t_img.rows/2), 0, 0, INTER_LINEAR);
    resize(t_img, dst_img2, Size(t_img.cols*2, t_img.rows*2), 0, 0, INTER_LINEAR);
    imshow("show", dst_img1);
    waitKey(1000);
    imshow("show", dst_img2);

    waitKey(1000);

    

    return 0;
}