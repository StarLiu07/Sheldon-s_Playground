#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

//学生类
class Student : public Identity
{
public:

	//默认构造
	Student();

	//有参构造  参数： 学号、姓名、密码
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void opermenu();

	//申请预约
	void applyorder();

	//查看自身预约
	void showmyorder();

	//查看所有预约
	void showallorder();

	//取消预约
	void cancelorder();

	//学生学号
	int m_id;
};