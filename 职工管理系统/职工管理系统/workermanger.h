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

	//统计文件中的人数
	int get_num();

	//初始化员工
	void init_emp();

	//显示职工
	void showemp();

	//删除职工
	void del_emp();

	//判断职工是否存在，如果存在返回职工所在数组中的位置，不存在返回-1
	int isexist(int id);

	//修改职工
	void mod_emp();

	//查找职工
	void find_emp();

	//按编号排序
	void sort_emp();

	//清空文件
	void clean_file();

	//析构函数
	~workermanger();
};