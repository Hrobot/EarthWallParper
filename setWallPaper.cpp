#include "setWallPaper.h"

using namespace std;

void SetWallPaper()
{
	CImage earth;
	earth.Load("earth.png");
	earth.Save("earth.bmp");

	//"C:\\Users\\TiriSane\\Documents\\Visual Studio 2015\\Projects\\seeEarth\\seeEarth\\earth.bmp"<-����Ŀ¼�ĳ���exe���ڵ�Ŀ¼
	SystemParametersInfo(SPI_SETDESKWALLPAPER,0, "C:\\Users\\TiriSane\\Documents\\Visual Studio 2015\\Projects\\seeEarth\\seeEarth\\earth.bmp", SPIF_SENDCHANGE);
}