#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述：
* 求两个合集的差集
* 
* 函数原型：
* set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
* 求两个合集的差集
* 注意：两个集合必须是有序序列
* beg1 容器1开始迭代器
* end1 容器1结束迭代器
* beg2 容器2开始迭代器
* end2 容器2结束迭代器
* dest 目标容器开始迭代器
*/

void myprint3(int val)
{
	cout << val << "  ";
}

void test03()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//创建差集目标容器
	vector<int> vtarget;
	//给目标容器开辟空间
	//最特殊的情况  两个容器没有交集  取两个容器中大的size作为目标容器开辟空间
	vtarget.resize(v1.size(),v2.size());

	cout << "v1和v2的差集为：" << endl;

	vector<int>::iterator itend = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint3);
	cout << endl;

	cout << "————————————————" << endl;
	cout << "v2和v1的差集为：" << endl;

	itend = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtarget.begin());

	for_each(vtarget.begin(), itend, myprint3);
	cout << endl;

}

int main() {

	test03();

	system("pause");

	return 0;
}