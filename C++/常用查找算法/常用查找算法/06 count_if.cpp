#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 按条件统计元素个数
* 
* 函数原型：
* count_if(iterator beg,iterator end,_pred);
* 按条件统计元素出现次数
* beg 开始迭代器
* end 结束迭代器
* _pred 谓词
*/

//统计内置数据类型

class greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};

void test09()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), greater20());

	cout << "大于20的元素个数为：" << num << endl;
}

//统计自定义数据类型
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

class agegreater20
{
public:
	bool operator()(const person& p)
	{
		return p.m_age > 20;
	}
};

void test10()
{
	vector<person> v;

	person p1("刘备", 35);
	person p2("关羽", 35);
	person p3("张飞", 35);
	person p4("赵云", 40);
	person p5("曹操", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//统计 大于20岁的人员个数
	int num = count_if(v.begin(), v.end(), agegreater20());

	cout << "大于20岁的人员个数为：" << num << endl;
}

int main() {

	//test09();
	test10();

	system("pause");

	return 0;
}