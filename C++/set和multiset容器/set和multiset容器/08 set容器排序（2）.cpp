#include <iostream>
using namespace std;
#include <set>

//set容器排序，存放自定义数据类型


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

class compareperson
{
public:
	bool operator()(const person& p1, const person& p2)const
	{
		//按照年龄 降序
		return p1.m_age > p2.m_age;
	}
};


void test10()
{
	//自定义数据类型 都会指定排序规则
	set<person,compareperson> s;

	//创建person对象
	person p1("刘备", 24);
	person p2("关羽", 28);
	person p3("张飞", 25);
	person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<person,compareperson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}
}

int main() {

	test10();

	system("pause");

	return 0;
}