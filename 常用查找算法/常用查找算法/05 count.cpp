#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述：
* 统计元素个数
* 
* count(iterator beg,iterator end,value);
* 统计元素出现次数
* beg开始迭代器
* end结束迭代器
* value统计的元素
*/

//1.统计内置数据类型
void test07()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);

	cout << "40的元素个数为：" << num << endl;
}

//2.统计自定义数据类型
class person
{
public:

	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	bool operator==(const person& p)const 
	{
		if (this->m_age == p.m_age)
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

void test08()
{
	vector<person> v;

	person p1("刘备", 35);
	person p2("关羽", 35);
	person p3("张飞", 35);
	person p4("赵云", 30);
	person p5("曹操", 40);

	//将人员插入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	person p("诸葛亮", 35);

	int num = count(v.begin(), v.end(), p);

	cout << "和诸葛亮同岁数人数为：" << num << endl;
}

int main5() {

	//test07();
	test08();

	system("pause");

	return 0;
}