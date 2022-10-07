#include "CreateMap.h"

//展示地图
void CreateMap::ShowMap()
{
	//行
	for (int i = 0; i < 60; i+=2)
	{
		Setxy(i,0);
		cout << "■";
		Setxy(i, 29);
		cout << "■";
	}

	//列
	for (int i = 0; i < 30; i++)
	{
		Setxy(0, i);
		cout << "■";
		Setxy(58, i);
		cout << "■";
	}
}

//设置光标
void CreateMap::Setxy(int x,int y)
{
	COORD pos = { x,y }; 

	//得到控制台窗口
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hOut, pos);
}