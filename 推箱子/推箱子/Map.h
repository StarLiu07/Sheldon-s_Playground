#pragma once
#define M 10
#define N 10


//地图类
class Map
{
public:
	Map(); //构造函数
	~Map(); //析构函数
	void Init();

	void ReadMapFile(int map[M][N], int size, const char* filename);
	void WriteMapFile(int map[M][N], int size, const char* filename);
private:

};