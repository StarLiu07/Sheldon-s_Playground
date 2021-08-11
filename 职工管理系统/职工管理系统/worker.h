#pragma once
#include<iostream>
using namespace std;

class worker
{
public:
	//显示个人信息
	virtual void showinfo() = 0;

	//获取部门名称
	virtual string getdeptname() = 0;

	//职工编号
	int m_id;
	//职工姓名
	string m_name;
	//部门信息
	int m_deptid;
};