#include "opencv2/opencv.hpp"
#include <iostream>


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

    namedWindow("input", WINDOW_AUTOSIZE);

    imshow("input", src);

    waitKey(0);

    

    return 0;
}