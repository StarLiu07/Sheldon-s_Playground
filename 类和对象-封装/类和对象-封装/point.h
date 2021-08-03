#pragma once
#include<iostream>
using namespace std;

//点类
class point
{
public:
	//设置x
	void setx(int num_x);


		//获取x
		int getx();


		//设置y
		void sety(int num_y);


		//获取y
		int gety();


private:
	int m_x;
	int m_y;
};