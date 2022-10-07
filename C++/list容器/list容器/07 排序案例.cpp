#include <iostream>
using namespace std;
#include <list>

//案例描述：将person自定义数据类型进行排序，person中有姓名，年龄，升高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

class person
{
public:

	person(string name,int age,int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}

	string m_name;//姓名;
	int m_age;//年龄
	int m_height;//身高
};

//指定排序规则
bool compareperson(person& p1,person& p2)
{
	//按照年龄 升序
	if (p1.m_age == p2.m_age)
	{
		//年龄相同 按照身高降序
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void test09()
{
	list<person> l;  //创建容器

	//准备数据
	person p1("刘备", 35, 175);
	person p2("曹操", 45, 180);
	person p3("孙权", 40, 179);
	person p4("赵云", 25, 190);
	person p5("张飞", 35, 160);
	person p6("关羽", 35, 200);

	//插入数据
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
	l.push_back(p5);
	l.push_back(p6);

	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名为：" << (*it).m_name << " 年龄为：" << (*it).m_age << " 身高为：" << (*it).m_height << endl;
	}

	//排序
	cout << "——————————————————" << endl;
	cout << "排序后：" << endl;
	l.sort(compareperson);
	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << "姓名为：" << (*it).m_name << " 年龄为：" << (*it).m_age << " 身高为：" << (*it).m_height << endl;
	}
}

int main() {

	test09();

	system("pause");

	return 0;
}