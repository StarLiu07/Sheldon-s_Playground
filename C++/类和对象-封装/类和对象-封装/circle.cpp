#include"circle.h"


	//设置半径
	void circle::setr(int r)
	{
		m_r = r;
	}
	//获取半径
	int circle::getr()
	{
		return m_r;
	}
	//设置圆心
	void circle::setcenter(point center)
	{
		m_center = center;
	}
	//获取圆心
	point circle::getcenter()
	{
		return m_center;
	}

