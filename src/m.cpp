#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

int main(){
    cv::Mat image = cv::imread("/home/zc/project/Facedetection_opencv/baby.png");
    cv::Mat logo = cv::imread("/home/zc/project/Facedetection_opencv/hatq.png");
    cv::Mat mask = cv::imread("/home/zc/project/Facedetection_opencv/hatq.png",0);
    cv::Mat imageROI;
    imageROI = image(cv::Rect(250,50,logo.cols,logo.rows));
    logo.copyTo(imageROI,mask);
    //cv::namedWindow("result");
    cv::imshow("result",image);
    cv::imwrite("result.jpg",image);
    cv::waitKey();
    return 0;
}

