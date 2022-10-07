#include <iostream>
using namespace std;
#include "speechManager.h"
#include <ctime>

int main() {

	//随机数种子
	srand((unsigned int)time(NULL));

	//创建管理类对象
	speechManager sm;

	//测试12名选手创建
	//for (map<int, speaker>::iterator it = sm.m_speaker.begin(); it != sm.m_speaker.end(); it++)
	//{
	//	cout << "选手编号：" << it->first << "姓名：" << it->second.m_name << "分数：" << it->second.m_score[0] << endl;
	//}

	int choice = 0; //用于存储用户输入

	while (true)
	{
		sm.show_menu();

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: //开始比赛
			sm.startspeech();
			break;
		case 2: //查看往届记录
			sm.showrecord();
			break;
		case 3: //清空比赛记录
			sm.clearRecord();
			break;
		case 0: //退出系统
			sm.exitsystem();
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}

	system("pause");

	return 0;
}