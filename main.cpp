#include "main.h"

using namespace std;

int main()
{
	while(true)
	{
		if (downPicFromURL(getURLForHimawari8()))
		{
			SetWallPaper();
		}
		else
		{
			cerr << "ʧȥ�����տ�8�ŵ���ϵ" << endl;
		}

		Sleep(600000);
	}

	return 0;
}