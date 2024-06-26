﻿

#include <iostream>
#include "Rtsp_VideoCapture.h"
/*************************************************************/
int Rtsp_VideoCapture();
/*************************************************************/
int main()
{
    Rtsp_VideoCapture();    
}
/*************************************************************/
int Rtsp_VideoCapture()
{
    cv::Mat frame;
   
    VideoCapture cap("rtsp://");
   
    if (!cap.isOpened())
    {
        std::cout << "Open capture failed";
        return 0;
    }
    
    while (1)
    {        
        cap >> frame;
        if (frame.empty())
            break;
        else                
        cv::imshow("ffmpeg rtsp capture", frame);        
        if(cv::waitKey(1) != -1)
            break;       
    }    
}
/*************************************************************/
