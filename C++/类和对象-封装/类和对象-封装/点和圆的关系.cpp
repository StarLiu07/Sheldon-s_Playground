#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"

//设计一个圆类（circle）和一个点类（poinyt） ，计算点和圆的关系

/*
点到圆心的距离 == 半径  点在圆上
点到圆心的距离 >  半径  点在圆外
点到圆心的距离 <  半径  点在圆内
*/
//在坐标系上，求两点的距离可以用  (x1-x2)^2+(y1-y2)^2的算术平方根

////点类
//class point
//{
//public:
//	//设置x
//	void setx(int num_x)
//	{
//		m_x = num_x;
//	}
//
//	//获取x
//	int getx()
//	{
//		return m_x;
//	}
//
//	//设置y
//	void sety(int num_y)
//	{
//		m_y = num_y;
//	}
//
//	//获取y
//	int gety()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};

////圆类
//class circle
//{
//public:
//	//设置半径
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	//获取半径
//	int getr()
//	{
//		return m_r;
//	}
//	//设置圆心
//	void setcenter(point center)
//	{
//		m_center = center;
//	}
//	//获取圆心
//	point getcenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;//半径
//
//	//在类中，可以用另一个类作为成员
//	point m_center;//圆心
//};

//判断点和圆的关系函数
void isincircle(circle& c, point &point)
{
	//计算两点之间的距离
	int distance = (c.getcenter().getx() - point.getx()) * (c.getcenter().getx() - point.getx()) +
		(c.getcenter().gety() - point.gety()) * (c.getcenter().gety() - point.gety());

	//计算半径的平方
	int rdistance = (c.getr())* (c.getr());

	//判断关系
	if (distance > rdistance)
	{
		cout << "点在园外" << endl;
	}
	else if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main() {

	//创建圆
	circle c;
	c.setr(10);

	point c_center;
	c_center.setx(0);
	c_center.sety(10);
	c.setcenter(c_center);

	//创建点
	point point;
	point.setx(0);
	point.sety(20);

	//判断关系
	isincircle(c, point);

	system("pause");

	return 0;
}