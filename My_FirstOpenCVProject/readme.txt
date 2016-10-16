试一下git蛤
一些常用命令：
将当前目录初始化为git可管理的仓库：git init
将当前目录(子目录里的不行)下的文件添加到本地仓库：git add readme.txt
将文件提交到仓库:git commit -m "something"
查看当前git状态：git status

添加当前目录到远程repositories：git remote add origin https://github.com/RoseFreeman/Learning-OpenCV.git
把当前目录push进repository：git push origin master

1：下载、解压OpenCV。
2：配置环境变量，系统变量PATH中添加： opencv\build\x64\vc12\bin、opencv\build\x86\vc12\bin等。
3：新建一个空的c++工程，打开视图->其他窗口->属性管理器，找到debug下的Microsoft.Cpp.Win32.user，双击后在通用属性\VC++目录\包含目录中添加：
C:\Program Files\opencv\build\include\opencv2
C:\Program Files\opencv\build\include\opencv
C:\Program Files\opencv\build\include
库目录：
C:\Program Files\opencv\build\x86\vc12\lib
Ps.如果想要使用64位系统此处需要修改
4：链接器、输入、附加依赖项中，写入所有C:\Program Files\opencv\build\x86\vc12\lib下的lib文件名：
opencv_calib3d2413.lib
opencv_calib3d2413d.lib
opencv_contrib2413.lib
opencv_contrib2413d.lib
opencv_core2413.lib
opencv_core2413d.lib
opencv_features2d2413.lib
opencv_features2d2413d.lib
opencv_flann2413.lib
opencv_flann2413d.lib
opencv_gpu2413.lib
opencv_gpu2413d.lib
opencv_highgui2413.lib
opencv_highgui2413d.lib
opencv_imgproc2413.lib
opencv_imgproc2413d.lib
opencv_legacy2413.lib
opencv_legacy2413d.lib
opencv_ml2413.lib
opencv_ml2413d.lib
opencv_nonfree2413.lib
opencv_nonfree2413d.lib
opencv_objdetect2413.lib
opencv_objdetect2413d.lib
opencv_ocl2413.lib
opencv_ocl2413d.lib
opencv_photo2413.lib
opencv_photo2413d.lib
opencv_stitching2413.lib
opencv_stitching2413d.lib
opencv_superres2413.lib
opencv_superres2413d.lib
opencv_ts2413.lib
opencv_ts2413d.lib
opencv_video2413.lib
opencv_video2413d.lib
opencv_videostab2413.lib
opencv_videostab2413d.lib
首先装了个2413，官网上边的latest version居然不是3.1…
恩，结束了

建立一个cpp文件，试一下
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

这里pic.jpg的目录需要和.vcxproj放在一起，不是和.sln一起的那个目录
