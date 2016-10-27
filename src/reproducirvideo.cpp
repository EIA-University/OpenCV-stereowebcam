#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
 
int main(int argc, char** argv)
{
    string filename = "holi.webm";
    VideoCapture capture(filename);
    Mat frame;

    if( !capture.isOpened() )
        throw "Error when reading steam_webm";

    namedWindow( "La ventana más beia",0);
    resizeWindow("La ventana más beia", 500,500);

    for( ; ; )
    {
        capture >> frame;
        if(frame.empty())
            break;
        imshow("La ventana más beia", frame);
        waitKey(20); // waits to display frame
    }
    waitKey(0);
    cvDestroyWindow("La ventana más beia");
}
