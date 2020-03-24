#include <torch/torch.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include "SPextractor.h"

using namespace cv;
using namespace ORB_SLAM2;
int main(int argc, char** argv )
{   
    // Retrieve paths to images
    Mat desc;
    Mat im,im2;
    std::vector<cv::KeyPoint> mvKeys;
    cv::Mat mDescriptors;
    im = imread("../data/123.png",CV_8UC1);
    
    ORBextractor* extractor = new ORBextractor(500,1.2,4,0.015,0.007);

    (*extractor)(im,cv::Mat(),mvKeys,mDescriptors);

    drawKeypoints(im, mvKeys, im2  ,Scalar::all(-1), DrawMatchesFlags::DEFAULT);
    
    //imshow("Display Image", im2);
    //waitKey(0);   
    imwrite( "Gray.jpg",im2);
    
    
    return 0;
}