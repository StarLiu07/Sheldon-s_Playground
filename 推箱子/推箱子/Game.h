#define _GAEM_H__
#ifdef _GAEM_H__

#include <iostream>
using namespace std;
#include <string.h>
#include <conio.h>
#pragma warning (disable:4996)
#define N 10
#define M 10

/***************************建立一个推箱子相关操作的类***********************/
/*--------------------------Game类编写-----------------------------------*/
/****************************************************************************/
class Game
{
public:
	int Move(int map[M][N], char ch);
	void Drop(int map[M][N],int c);
	int juide(int map[M][N]);
private:
	int push(int map[M][N], int offsetX, int offsetY);
	void Postion(int map[M][N]);
	int posX;
	int posY;
};
#endif /*_GAME_H__*/