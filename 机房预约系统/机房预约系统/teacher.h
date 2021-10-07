#pragma once
#include <iostream>
using namespace std;
#include "Identity.h"

class Teacher : public Identity
{
public:

	//默认构造
	Teacher();

	//有参构造
	Teacher(int empid, string name, string pwd);

	//菜单界面
	virtual void opermenu();

	//查看所有预约
	void showallorder();

	//审核预约
	void validorder();

	//职工号
	int m_empid;
};