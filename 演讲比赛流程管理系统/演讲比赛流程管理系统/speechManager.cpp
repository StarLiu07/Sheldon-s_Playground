#include "speechManager.h"

//构造函数
speechManager::speechManager()
{
	//初始化容器和属性
	this->initspeech();

	//创建12名选手
	this->createspeaker();
}

//菜单功能
void speechManager::show_menu()
{
	cout << "*****************************" << endl;
	cout << "******欢迎参加演讲比赛*******" << endl;
	cout << "*******1.开始演讲比赛********" << endl;
	cout << "*******2.查看往届记录********" << endl;
	cout << "*******3.清空比赛记录********" << endl;
	cout << "*******0.退出比赛程序********" << endl;
	cout << "*****************************" << endl;
	cout << endl;
}

//退出系统
void speechManager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//初始化容器和属性
void speechManager::initspeech()
{
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vvicitory.clear();
	this->m_speaker.clear();

	//初始化比赛轮数
	this->m_index = 1;
}

//创建12名选手
void speechManager::createspeaker()
{
	string nameseed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameseed.size(); i++)
	{
		string name = "选手";
		name += nameseed[i];

		//创建了具体选手
		speaker sp;
		sp.m_name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}

		//创建选手编号 并且放入到v1容器中
		this->v1.push_back(i + 10001);

		//选手编号以及对应选手 放入到map容器中
		this->m_speaker.insert(make_pair(i + 10001, sp));

	}
}

//开始比赛 比赛整个流程控制函数
void speechManager::startspeech()
{
	//第一轮开始比赛

	//1.抽签
	this->speechdraw();

	//2.比赛

	//3.显示晋级结果

	//第二轮开始比赛
	
	//1.抽签

	//2.比赛

	//3.显示最终结果

	//4.保存分数到文件中
}

//抽签
void speechManager::speechdraw()
{
	cout << "第 << " << this->m_index << " >> 轮比赛选手正在抽签" << endl;
	cout << "——————————————————" << endl;
	cout << "抽签后演讲顺序如下：" << endl;

	if (this->m_index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << "  ";
		}
		cout << endl;
	}

	cout << "——————————————————" << endl;
	system("pause");
}


//析构函数
speechManager::~speechManager()
{

}