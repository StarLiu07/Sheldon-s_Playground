#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

class boss : public worker
{
public:
	//构造函数
	boss(int id, string name, int did);

	//显示个人信息
	virtual void showinfo() ;

	//获取部门名称
	virtual string getdeptname() ;
};