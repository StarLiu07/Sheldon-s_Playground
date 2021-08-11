#pragma once  //防止头文件重复包含
#include<iostream> //标准输入输出流
using namespace std; //标准命名空间
#include "worker.h"

class workermanger
{
public:
	
	//构造函数
	workermanger();

	//展示菜单
	void show_menu();

	//退出函数
	void exitsystem();

	//记录职工人数
	int m_empnum;

	//职工数组指针
	worker** m_emparry;

	//添加职工
	void add_emp();

	//析构函数
	~workermanger();
};