#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    while (true)
    {
        std::cout << "11" << std::endl;
        cv::Mat img_grayscale = cv::imread("C:/Projects/opencv_cpp/img.png");
        cv::imshow("we", img_grayscale);
        cv::waitKey(1);
        std::cout << CV_VERSION << std::endl;
        if (cv::waitKey(0) == 27) // Exit when the ESC key is pressed
            break;
    }
    
    return 0;
}