#pragma once
#include <string>
#include <vector>

#define LAY 801  //横
#define STAND 802 //竖
#define MAIN 803 //主对角  从左上到右下
#define VICE 804 //副对角  从左下到右上

#define BLACK 811 //黑子
#define WHITE 812 //白子
#define NONE 813 //??

#define ERROR -124 //错误

struct Chess
{
	int color; //颜色
	int atkValue; //攻击分
	int defValue; //防守分数
	int row; //横坐标
	int col; //纵坐标
	bool isBoundry; //是否处于边界处
	Chess() { this->isBoundry = false; }; //一般情况下都不是边界，只有在初始赋值的情况下有边界
	Chess(int color, int atkValue, int defValue, int x, int y, bool isBoundry)
	{
		this->color = color;
		this->atkValue = atkValue;
		this->defValue = defValue;
		this->row = x;
		this->col = y;
		this->isBoundry = isBoundry;
	}
	Chess(int color, int atkValue, int defValue)
	{
		this->color = color;
		this->atkValue = atkValue;
		this->defValue = defValue;
		this->isBoundry = false;
	}
	Chess(int color)
	{
		this->color = color;
		this->isBoundry = false;
	}
	Chess(int x,int y)
	{
		this->row = x;
		this->col = y;
		this->isBoundry = false;
	}
	Chess(std::string error)
	{
		this->color = ERROR;
		this->atkValue = ERROR;
		this->defValue = ERROR;
		this->row = ERROR;
		this->col = ERROR;
		this->isBoundry = true;
	}
};

//地图类
class Map
{
private:
	int size; //尺寸
	Chess** map; //??
	int friendColor; //友方颜色
	int enemyColor; //敌方颜色
	int num;//记录全盘棋子数
public:
	Map(void); //构造
	~Map(void); //析构
	void iniMap(int size);
	int getSize();
	int getFriendColor();
	int getNum();
	int numPlus();
	void setAtkValue(Chess ce, int atkValue);
	void setDefValue(Chess ce, int defValue);
	int getAtkValue(Chess ce);
	int getDefValue(Chess ce);
};