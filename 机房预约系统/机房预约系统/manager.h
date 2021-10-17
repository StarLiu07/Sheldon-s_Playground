#pragma once
#include <iostream>
using namespace std;
#include "identity.h"

//管理员类
class Manager : public Identity
{
public:
	
	//默认构造
	Manager();

	//有参构造
	Manager(string name,string pwd);

	//菜单界面
	virtual void opermenu();

	//添加账号
	void addperson();

	//查看账号
	void showperson();

	//查看机房信息
	void showcomputer();

	//清空预约记录
	void cleanfile();

};