#include<iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	Mat img = imread("pic.jpg");
	namedWindow("some img");
	imshow("some img",img);
	waitKey(6000);
}