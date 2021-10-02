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
	this->speechcontest();

	//3.显示晋级结果
	this->showscore();

	//第二轮开始比赛
	this->m_index++;
	
	//1.抽签
	this->speechdraw();

	//2.比赛
	this->speechcontest();

	//3.显示最终结果
	this->showscore();

	//4.保存分数到文件中
	this->saverecord();

	cout << "本届比赛结束" << endl;
	system("pause");
	system("cls");
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
//比赛
void speechManager::speechcontest()
{
	cout << "——————第" << this->m_index << "轮比赛正式开始:————————" << endl;

	//准备临时容器 存放小组成绩
	multimap<double, int, greater<double>> groupscore;

	int num = 0; //用于统计人员个数 6人一组

	vector<int> v_src;//比赛选手容器
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		num++;
		//评委打分
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //600~1000
			//cout << score << "  ";
			d.push_back(score);
		}
		//cout << endl;

		sort(d.begin(), d.end(), greater<double>()); //排序
		d.pop_front(); //去除最高分
		d.pop_back(); //去除最低分

		double sum = accumulate(d.begin(), d.end(), 0.0f); //总分
		double avg = sum / (double)d.size(); //平均分

		//打印平均分
		//cout << "编号：" << *it << "姓名：" << this->m_speaker[*it].m_name << "获取平均分：" << avg << endl;

		//将平均分 放入到 map容器里
		this->m_speaker[*it].m_score[this->m_index] = avg;

		//将打分数据 放入到临时小组容器中
		groupscore.insert(make_pair(avg, *it)); //key使得分 value是具体选手编号
		//每6人去除前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组的比赛名词：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end(); it++)
			{
				cout << "编号：" << it->second << "姓名：" << this->m_speaker[it->second].m_name << "成绩："
					<< this->m_speaker[it->second].m_score[this->m_index] << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end() && count < 3; it++,count++)
			{
				if (this->m_index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vvicitory.push_back((*it).second);
				}
			}

			groupscore.clear(); //小组容器清空
			cout << endl;
		}
	}

	cout << "——————————第" << this->m_index << "轮比赛已完毕——————————" << endl;
	system("pause");

}

//显示得分
void speechManager::showscore()
{
	cout << "————————第" << this->m_index << "轮晋级选手如下：——————————" << endl;

	vector<int> v;
	if (this->m_index == 1)
	{
		v = v2;
	}
	else
	{
		v = vvicitory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << "姓名：" << this->m_speaker[*it].m_name << "得分：" 
			<< this->m_speaker[*it].m_score[this->m_index] << endl;
	}
	cout << endl;

	system("pause");
	system("cls");
	this->show_menu();
}

//保存得分
void speechManager::saverecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app); //用追加的方式写文件

	//将每个选手数据 写入到文件中
	for (vector<int>::iterator it = vvicitory.begin(); it != vvicitory.end(); it++)
	{
		ofs << *it << "," << this->m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	//关闭
	ofs.close();
	cout << "记录已经保存" << endl;
}


//析构函数
speechManager::~speechManager()
{

}