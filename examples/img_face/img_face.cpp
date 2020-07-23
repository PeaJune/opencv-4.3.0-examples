#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>
#include <vector>
#include <queue>

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
    waitKey(30);

    CascadeClassifier faceCascade("haarcascade_frontalface_alt.xml");
    vector<Rect> found;
    Rect rect;

    faceCascade.detectMultiScale(src, found, 1.01, 5, 0, Size(32,32));

    cout<<"found face size: "<<found.size()<<endl;

    for(int i=0; i<found.size(); i++)
    {
        rect = found[i];
        rectangle(src, rect, Scalar(0,255,0), 1);
    }
    imshow("input", src);
    waitKey(0);

    Mat c1 = (Mat_<uchar>(3, 3) << 1, 5, 6, 2, 4, 3, 8, 9, 7);
    Mat c3 = c1.reshape(1, 9);
    
    return 0;
}