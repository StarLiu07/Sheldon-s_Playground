#pragma once;
#include<iostream>
using namespace std;
#include <fstream>
#define FILENAME "person.txt"
#include<cstdlib>

#include "工人.h"
#include "经理.h"
#include "老板.h"
#include "员工.h"

class workermanger
{
public:
	//构造函数
	workermanger();

	//显示菜单
	void showmenu();

	//退出菜单
	void tui();

	//保存员工
	void save();

	int get_empnum();

	//读取文件
	void duqu();

	//增加员工
	void addemp();

	//显示员工
	void show_emp();

	//删除职工
	void delete_emp();

	//修改员工
	void xiygai();

	//查找员工
	void find_emp();

	//编号排序
	void sort_emp();


	//清空文件
	void clean();

	//析构函数
	~workermanger();

	int emp_num;
	bool emp_file;
	worker** workerarry;
};
