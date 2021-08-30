#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述：
* 查找相邻重复元素
* 
* 函数原型：
* adjacent_find(iterator beg,iterator end);
* 查找相邻重复元素，返回相邻元素的第一个位置的迭代器
* beg开始迭代器
* end结束迭代器
*/

void test05()
{
	vector<int> v;

	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());

	if (pos == v.end())
	{
		cout << "未找到相邻重复元素" << endl;
	}
	else
	{
		cout << "找到相邻重复元素为：" << *pos << endl;
	}
}

int main3() {

	test05();

	system("pause");

	return 0;
}