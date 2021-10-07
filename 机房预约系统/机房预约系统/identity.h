#pragma once //防止头文件重复包含
#include <iostream>
using namespace std;

//身份抽象基类
class Identity
{
public:

	//操作菜单 纯虚函数
	virtual void opermenu() = 0;

	//用户名
	string m_name;
	//密码
	string m_Pwd;
};