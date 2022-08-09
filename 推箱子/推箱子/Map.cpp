#include <Map.h>
#include <iostream>
#include <fstream>
using namespace std;

Map::Map()
{

}

//地图初始化方法
void Map::Init()
{
	//画地图
	int Map[10][10] =
	{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 4, 3, 0, 1, 1, 1, 1 },
	{ 1, 0, 4, 3, 4, 3, 0, 0, 1, 1 },
	{ 1, 7, 3, 4, 3, 4, 2, 0, 1, 1 },
	{ 1, 0, 4, 3, 4, 3, 0, 1, 1, 1 },
	{ 1, 0, 0, 4, 3, 0, 0, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};

	WriteMapFile(Map, 10, "map/map_05.txt");
}

//读取地图文件
void Map::ReadMapFile(int map[M][N], int size, const char* filename)
{
	FILE* pfile = nullptr; //定义一个FILE的指针用来保存流，首先指向空
	fopen_s(&pfile, filename, "rb"); //参数一：指针地址 参数二：文件名 参数三：打开方式
	//rb:打开一个二进制文件，文件必须存在，只允许读。
	fread(map, 10 * size * 4, 1, pfile);
	fclose(pfile);
}

//写入地图文件
void Map::WriteMapFile(int map[M][N], int size, const char* filename)
{
	FILE* pfile = nullptr;
	fopen_s(&pfile, filename, "wb"); //wb: 只写打开一个二进制文件，只允许写数据
	fwrite(map, 10 * size * 4, 1, pfile);
	fclose(pfile);
}

//析构函数
Map::~Map()
{

}