#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述：
* 求两个容器的交集
* 
* 函数原型：
* set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* 求两个集合的交集
* 注意：两个集合必须是有序序列
* beg1 容器1开始迭代器
* end1 容器1结束迭代器
* beg2 容器2开始迭代器
* end2 容器2结束迭代器
* dest 目标容器开始迭代器
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);//0`9
		v2.push_back(i + 5);//5`14
	}

	vector<int> vtarget;
	//目标容器需要提前开辟空间
	//最特殊情况 大容器包含小容器  开辟空间 取小容器的size即可
	vtarget.resize(min(v1.size(), v2.size()));

	//获取交集
	vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint);
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}