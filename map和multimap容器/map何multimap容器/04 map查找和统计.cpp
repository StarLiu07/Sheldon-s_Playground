#include <iostream>
using namespace std;
#include <map>

/*
* 函数原型：
* find(key);  查找key是否存在，若存在，返回该键的元素的迭代器
* count(key);  统计key的元素个数
*/


void test05()
{
	//查找
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>::iterator pos = m1.find(3);

	if (pos != m1.end())
	{
		cout << "查找到了元素  key = " << pos->first << "  value = " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	//map不允许插入重复key元素，count统计而言，结果要么是0，要么是1
	//multimap的count统计可能大于1
	int num = m1.count(3);
	cout << "num = " << num << endl;
}

int main4() {

	test05();

	system("pause");

	return 0;
}