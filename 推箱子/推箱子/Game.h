#pragma once
#define _GAME_H__
#ifdef _GAME_H__

#include <iostream>
using namespace std;
#include <string.h>
#include <conio.h>
#define M 10 //#define²»¼Ó·ÖºÅ£¡£¡£¡£¡£¡£¡
#define N 10

class Game
{
public:
	int Move(int map[M][N], char ch);
	void Drop(int map[M][N], int c);
	int juide(int map[M][N]);
private:
	int push(int map[M][N], int offsetX, int offsetY);
	void Postion(int map[M][N]);
	int posX;
	int posY;
};

#endif /*_GAME_H__*/