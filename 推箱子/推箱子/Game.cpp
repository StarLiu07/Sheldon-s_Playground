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