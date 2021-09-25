#pragma once
#include <iostream>
using namespace std;

/*
* 功能描述：
* 提供菜单界面与用户交互
* 对演讲比赛流程进行控制
* 与文件的读写交互
*/

//设计演讲比赛管理类
class speechManager
{
public:
	
	//构造函数
	speechManager();

	//菜单功能
	void show_menu();

	//退出系统
	void exitsystem();

	//析构函数
	~speechManager();

};