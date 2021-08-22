#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#include <algorithm>
#include <time.h>

//案例描述：有5名选手，选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，去平均分

/*
* 实现步骤
* 1.创建五名选手，放到vector中
* 2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分存到deque容器中
* 3.sort算法对deque容器中分数排序，去除最高分和最低分
* 4.deque容器遍历一遍，累加总分
* 5.获取平均值
*/

//选手类
class person
{
public:
	person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	
	string m_name; //姓名
	int m_score; //平均分
};

void createperson(vector<person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];

		int score = 0;

		person p(name, score);

		//将创建的person对象 放入到容器中
		v.push_back(p);
	}
}

//打分
void setscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数，放入到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60; //60~100
			d.push_back(score);
		}

		//cout << "选手：" << it->m_name << "打分：" << endl;
		//for (int i = 0; i < 10; i++)
		//{
		//	cout << *dit << "  ";
		//}
		//cout << endl;

		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit; //累加每个评委的分数
		}

		int avg = sum / d.size();

		//将平均分赋值给选手
		it->m_score = avg;
	}
}

void showscore(vector<person>& v)
{
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手：" << it->m_name << " 得分：" << it->m_score << endl;
	}
}

int main() {

	//随机数种子
	srand((unsigned int)time(NULL));

	//1.创建五名选手
	vector<person> v;//存放选手的容器
	createperson(v);

	//测试
	//for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名" << (*it).m_name << " 分数：" << (*it).m_score << "  ";
	//}
	//cout << endl;

	//2.给五名选手打分
	setscore(v);

	//3.显示最后得分
	showscore(v);

	system("pause");

	return 0;
}