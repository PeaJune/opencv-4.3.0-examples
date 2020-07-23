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

    Mat src=imread(argv[1], IMREAD_COLOR);
    
    if(src.empty())
    {
        cout<<"read failed."<<endl;
        return -1;
    }

    namedWindow("input", WINDOW_AUTOSIZE);

    imshow("input", src);
    Mat dst;
    waitKey(2000);
    // resize(src, dst, Size(960, 640), INTER_LINEAR);
    /*1080*/

    HOGDescriptor hog;
    Rect r;
    vector<Rect> found;


    hog.setSVMDetector(HOGDescriptor::getDefaultPeopleDetector());
    //hog.detectMultiScale(src, found, 0, Size(8, 8), Size(32, 32), 1.05, 2);

    hog.detectMultiScale(src, found);
    cout<<"found size:"<<found.size()<<endl;
    for(int i=0; i<found.size(); i++)
    {
        r = found[i];
        rectangle(src, r, Scalar(0,255,0),1);
    }

    imshow("input", src);


    waitKey(0);
    

    return 0;
}