#include <iostream>
using namespace std;
#include <map>

/*
* size();  返回容器中元素的数目
* empty();  判断容器是否为空
* swap(st);  交换两个集合容器
*/

void printmap1(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
}

//大小
void test02()
{
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	if (m1.empty())
	{
		cout << "m1为空" << endl;
	}
	else
	{
		cout << "m1不为空" << endl;
		cout << "m1的大小为：" << m1.size() << endl;
	}
}

//交换
void test03()
{
	map<int, int> m1;

	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int> m2;

	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));

	cout << "交换前：" << endl;

	printmap1(m1);
	cout << endl;
	printmap1(m2);

	cout << "——————————" << endl;
	m1.swap(m2);

	cout << "交换后：" << endl;
	printmap1(m1);
	cout << endl;
	printmap1(m2);
}

int main2() {

	//test02();

	test03();

	system("pause");

	return 0;
}