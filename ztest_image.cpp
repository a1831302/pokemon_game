#include <opencv2/opencv.hpp>  // Include OpenCV library

int main() {
    //load image
    cv::Mat image = cv::imread("temp.jpg");
    //create window
    cv::namedWindow("YOU SUCK!!!");
    // show the image in the window
    cv::imshow("YOU SUCK!!!", image);
    cv::waitKey(0);


    return 0;
}
