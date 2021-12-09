//
// Created by tjk on 2021/12/9.
//
#include<iostream>
#include "opencv4/opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    cv::VideoCapture cap;
    cap.open(0);
    while(true)
    {
        cv::Mat frame;
        cap >> frame;
        imshow("1",frame);
        if (waitKey(10) == 'q')
            break;
    }

    return 0;
}