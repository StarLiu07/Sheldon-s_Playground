#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <fstream>

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

	//初始化容器和属性
	void initspeech();

	//创建12名选手
	void createspeaker();

	//开始比赛 比赛整个流程控制函数
	void startspeech();

	//抽签
	void speechdraw();

	//比赛
	void speechcontest();

	//显示得分
	void showscore(); 

	//保存得分
	void saverecord();

	//读取记录
	void loadrecord();

	//显示往届记录
	void showrecord();

	//判断文件是否为空
	bool fileisempty;

	//存放往届记录的容器
	map<int, vector<string>>m_record;

	//成员属性
	//保存第一轮比赛选手的容器
	vector<int> v1;
	
	//第一轮晋级选手编号容器
	vector<int> v2;

	//胜出前三名选手编号容器
	vector<int> vvicitory;

	//存放编号以及对应具体选手容器
	map<int, speaker>m_speaker;

	//存放比赛轮数
	int m_index;

};