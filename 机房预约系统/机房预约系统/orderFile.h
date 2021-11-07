#pragma once
#include <iostream>
using namespace std;
#include "globalfile.h"
#include <fstream>
#include <map>

class OrderFile
{
public:

	//构造函数
	OrderFile();

	//更新预约记录
	void updateOrder();

	//记录预约条数
	int m_Size;

	//记录所有的预约信息的容器  key记录条数  value具体记录键值对信息
	map<int, map<string, string>> m_orderData;
};