#include<iostream>
using namespace std;

//作用：重载关系运算符，可以让自定义类型对象进行对比操作

class person4
{
public:

	//重载==运算符
	bool operator== (person4& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		return false;
	}

	//重载!=运算符
	bool operator!= (person4& p)
	{
		if (this->m_name != p.m_name || (this->m_age != p.m_age))
		{
			return true;
		}
		return false;
	}

	person4(string name,int age)
	{
		m_name = name;
		m_age = age;
	}

	string m_name;
	int m_age;
};

void test08()
{
	person4 p1("Tom", 18);

	person4 p2("Jerry", 18);

	// ==重载后使用
	//if (p1 == p2)
	//{
	//	cout << "p1 和 p2 相等" << endl;
	//}
	//else
	//{
	//	cout << "p1 和 p2 不相等" << endl;
	//}

	// !=重载后使用
	if (p1 != p2)
	{
		cout << "p1 和 p2 不相等" << endl;
	}
	else
	{
		cout << "p1 和 p2 相等" << endl;
	}
}

int main6() {

	test08();

	system("pause");

	return 0;
}