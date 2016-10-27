#include "opencv2/opencv.hpp"

using namespace cv;

int main(int, char**)
{
    VideoCapture cap(0); 
    if(!cap.isOpened())  
        return -1;
    Mat edges;
    namedWindow( "edges",0);
    resizeWindow("edges", 500,500);
    
    VideoCapture cap1(2);
      if(!cap1.isOpened())  
        return -1;

    Mat edges1;
    namedWindow("edges1",2);

    for(;;)
    {
        Mat frame;
        cap >> frame; 

        Mat frame1;
        cap1 >> frame1;
        imshow("edges", frame);
        imshow("edges1", frame1);
        if(waitKey(30) != -1){
            cvDestroyWindow("edges");
            cvDestroyWindow("edges1");
            
            cap.release();
            cap1.release();            
            break;
        } 
    }
    return 0;
}

