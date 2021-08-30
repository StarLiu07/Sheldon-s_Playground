#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 按条件查找元素
* 
* 函数原型：
* find_if(iterator beg,iterator end,_pred);
* 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
* beg开始迭代器
* end结束迭代器
* _pred函数或者谓词(返回bool类型的仿函数)
*/

class greaterfive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

//1.查找内置数据类型
void test03()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到大于5的数字为：" << *it << endl;
	}
}

//2.查找自定义数据类型
class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

class greater20
{
public:
	bool operator()(person& p)
	{
		return p.m_age > 20;
	}
};

void test04()
{
	vector<person> v;

	//创建数据
	person p1("a", 10);
	person p2("b", 20);
	person p3("c", 30);
	person p4("d", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找年龄大于20的人
	vector<person>::iterator it = find_if(v.begin(), v.end(), greater20());
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到姓名：" << it->m_name << "  年龄为：" << it->m_age << endl;
	}
}

int main2() {

	//test03();
	test04();

	system("pause");

	return 0;
}