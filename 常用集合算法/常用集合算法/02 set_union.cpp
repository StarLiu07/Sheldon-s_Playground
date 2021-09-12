#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述：
* 求两个集合的并集
* 
* 函数原型：
* set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* 求两个集合的并集  并集：两个容器不重复的部分
* 注意：两个集合必须是有序序列
* beg1 容器1开始迭代器
* end1 容器1结束迭代器
* beg2 容器2开始迭代器
* end2 容器2结束迭代器
* dest 目标容器开始迭代器
*/

void myprint2(int val)
{
	cout << val << "  ";
}

void test02()
{
	vector<int> v1;
	vector<int> v2;
	
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vtarget;
	//目标容器提前开辟空间
	//最特殊情况 两个容器没有交集，并集就是两个容器size相加
	vtarget.resize(v1.size() + v2.size());

	vector<int>::iterator itend = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(),itend, myprint2);
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}