��һ��git��
һЩ�������
����ǰĿ¼��ʼ��Ϊgit�ɹ���Ĳֿ⣺git init
����ǰĿ¼(��Ŀ¼��Ĳ���)�µ��ļ���ӵ����زֿ⣺git add readme.txt
���ļ��ύ���ֿ�:git commit -m "something"
�鿴��ǰgit״̬��git status

��ӵ�ǰĿ¼��Զ��repositories��git remote add origin https://github.com/RoseFreeman/Learning-OpenCV.git
�ѵ�ǰĿ¼push��repository��git push origin master

1�����ء���ѹOpenCV��
2�����û���������ϵͳ����PATH����ӣ� opencv\build\x64\vc12\bin��opencv\build\x86\vc12\bin�ȡ�
3���½�һ���յ�c++���̣�����ͼ->��������->���Թ��������ҵ�debug�µ�Microsoft.Cpp.Win32.user��˫������ͨ������\VC++Ŀ¼\����Ŀ¼����ӣ�
C:\Program Files\opencv\build\include\opencv2
C:\Program Files\opencv\build\include\opencv
C:\Program Files\opencv\build\include
��Ŀ¼��
C:\Program Files\opencv\build\x86\vc12\lib
Ps.�����Ҫʹ��64λϵͳ�˴���Ҫ�޸�
4�������������롢�����������У�д������C:\Program Files\opencv\build\x86\vc12\lib�µ�lib�ļ�����
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
����װ�˸�2413�������ϱߵ�latest version��Ȼ����3.1��
����������

����һ��cpp�ļ�����һ��
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

����pic.jpg��Ŀ¼��Ҫ��.vcxproj����һ�𣬲��Ǻ�.slnһ����Ǹ�Ŀ¼
