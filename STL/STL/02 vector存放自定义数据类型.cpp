#include <iostream>
using namespace std;
#include <vector>

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

void test02()
{
	vector<person> v;

	person p1("a", 10);
	person p2("b", 11);
	person p3("c", 12);
	person p4("d", 13);
	person p5("e", 14);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//cout << "姓名：" << (*it).m_name << "年龄：" << (*it).m_age << endl;
		cout << "姓名：" << it->m_name << "年龄：" << it->m_age << endl;
	}
}

//存放自定义数据类型 指针
void test03()
{
	vector<person*> v;

	person p1("a", 10);
	person p2("b", 11);
	person p3("c", 12);
	person p4("d", 13);
	person p5("e", 14);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器
	for (vector<person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_name << "年龄：" << (*it)->m_age << endl;
	}
}

int main2() {

	test02();

	system("pause");

	return 0;
}