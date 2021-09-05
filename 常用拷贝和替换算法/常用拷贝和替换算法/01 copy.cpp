#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 容器内指定范围的元素拷贝到另一容器中
* 
* 函数原型：
* copy(iterator beg,iterator end,iterator dest);
* 按指查找元素，返回找到指定位置迭代器，找不到就返回结束迭代器的位置
* beg 开始迭代器
* end 结束迭代器
* dest 目标起始迭代器
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	vector<int> v2;
	v2.resize(v1.size());

	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myprint);
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}