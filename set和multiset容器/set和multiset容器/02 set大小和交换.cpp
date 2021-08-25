#include <iostream>
using namespace std;
#include <set>

/*
* 函数原型：
* size();  返回容器中元素的数目
* empty();  判断容器是否为空
* swap(st);  交换两个集合容器
*/

void printset1(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//大小
void test02()
{
	set<int> s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//打印容器
	printset1(s1);

	//判断是否为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;
	}
}

//交换
void test03()
{
	set<int> s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;

	//插入数据
	s1.insert(100);
	s1.insert(300);
	s1.insert(200);
	s1.insert(400);

	cout << "交换前：" << endl;
	printset1(s1);
	printset1(s2);

	cout << "——————————————" << endl;
	cout << "交换后：" << endl;
	s1.swap(s2);
	printset1(s1);
	printset1(s2);
}

int main2() {

	test02();

	test03(); 

	system("pause");

	return 0;
}