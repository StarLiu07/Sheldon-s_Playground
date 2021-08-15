#include<iostream>
using namespace std;

//模板的通性并不是万能的

class person
{
public:
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	//姓名
	string m_name;

	//年龄
	int m_age;
};

//对比两个数据是否相等
template<class T>
bool mycompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化的person的版本实现代码,具体化优先调用
template<> bool mycompare(person& a, person& b)
{
	if (a.m_name == b.m_name && a.m_age == b.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	
	bool ret = mycompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	person p1("Tom",10);
	person p2("Tom", 10);

	bool ret = mycompare(p1, p2);
	
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}

int main1() {

	test01();

	test02();

	system("pause");

	return 0;
}