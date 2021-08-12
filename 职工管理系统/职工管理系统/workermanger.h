#pragma once  //防止头文件重复包含
#include<iostream> //标准输入输出流
using namespace std; //标准命名空间
#include "worker.h"
#include "boss.h"
#include "employee.h"
#include "manager.h"

#include<fstream>
#define  FILENAME "empfile.txt"

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

	//保存职工
	void save();

	//判断文件是否为空 标志
	bool m_fileisempty;

	//析构函数
	~workermanger();
};