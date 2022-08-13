#include "Game.h"

//按键控制人物移动
int Game::Move(int map[M][N], char ch)
{
	static int step = 0;
	//横纵坐标
	int offsetx = 0;
	int offsety = 0;
	switch (ch)
	{
		//向上移动
	case 'w':case 'W':
		offsetx = -1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++; //步数加一
		break;
		//向下移动
	case 's':case 'S':
		offsetx = 1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//向左运动
	case 'a':case 'A':
		offsetx = 0;
		offsety = -1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//向右运动
	case 'd':case 'D':
		offsetx = 0;
		offsety = 1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
	default:
		break;
	}
	return step;
}

//界面打印
//传入一个二维数组和一个关卡数
void Game::Drop(int map[M][N], int c)
{
	cout << "\t\t" << "**********************第 " << c << " 关**************************" << endl;
	cout << "\t\t" << "***************W-w:向上  S-s:向下*****************" << endl;
	cout << "\t\t" << "***************A-a:向左  D-d:向右*****************" << endl;
	cout << endl;

	//嵌套循环是为了遍历这个二维数组
	for (int i = 0; i < M; i++)
	{
		cout << "	";
		for (int j = 0; j < N; j++)
		{
			switch (map[i][j])
			{
				//打印空地
			case 0:
				cout << " ";
				break;
				//打印墙壁
			case 1:
				cout << "■";
				break;
				//打印玩家
			case 2:
				cout << "♀";
				posX = i;
				posY = j;
				break;
				//打印箱子
			case 3:
				cout << "□";
				break;
				//打印终点
			case 4:
				cout << "○";
				break;
			case 6:
				cout << "★";
				posX = i;
				posY = j;
				break;
			case 7:
				cout << "●";
				break;
			default:
				break;
			}
		}
		cout << endl; //换行
	}
}

//判断游戏胜利条件
int Game::juide(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (4 == map[i][j] || 6 == map[i][j]) //地图中还存在重点/终点+人
				return 1;
		}
	}
	return 0;
}