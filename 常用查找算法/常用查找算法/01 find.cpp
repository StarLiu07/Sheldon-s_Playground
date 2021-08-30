#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器
* 
* 函数原型:
* find(iterator beg,iterator end,vlaue);
* 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器的位置
* beg开始迭代器
* end结束迭代器
* value查找的元素
*/

//查找 内置数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中是否有 5 这个元素
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到元素 ：" << *it << endl;
	}
}

class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//重载 == 让底层find知道如何对吧person数据类型
	bool operator==(const person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_name;
	int m_age;
};

//查找 自定义数据类型
void test02()
{
	vector<person> v;
	//创建数据
	person p1("aaa", 10);
	person p2("bbb", 20);
	person p3("ccc", 30);
	person p4("ddd", 40);

	//放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	person pp("bbb", 20);

	vector<person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到元素 姓名：" << it->m_name << "  年龄：" << it->m_age << endl;
	}
}

int main1() {

	//test01();
	test02();

	system("pause");

	return 0;
}