#pragma once

#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/core/core.hpp>  

using namespace cv;

Mat mat2x2_to_Mat(uchar **array, int row, int col);

void show_mat2x2_as_image(uchar **array, int row, int col, int time_msec);