#include "myarry.hpp"
#include <iostream>
using namespace std;

void printintarry(myarry <int>arr1)
{
	for (int i = 0; i < arr1.getsize(); i++)
	{
		cout << arr1[i] << endl;
	}
}


void test04()
{
	myarry <int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.push_back(i);
		
	}
	//cout << "arr1的打印输出为：" << 
	printintarry(arr1);

	cout << "arr1的容量为：" << arr1.getcapacity() << endl;
	cout << "arr1的容量为：" << arr1.getsize() << endl;

	myarry <int>arr2(arr1);
	cout << "arr2的打印输出" << endl;

	printintarry(arr2);

	//尾删
	arr2.pop_back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量：" << arr2.getcapacity() << endl;
	cout << "arr2的大小：" << arr2.getsize() << endl;

	//myarry<int>arr2(arr1);

	//myarry<int>arr3(100);
	//arr3 = arr1;
}

//测试自定义数据类型
class person
{
public:

	person()
	{

	}
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void printpersonarry(myarry<person>arr)
{
	for (int i = 0; i < arr.getsize(); i++)
	{
		cout << "姓名：" << arr[i].m_name << " 年龄：" << arr[i].m_age << endl;
	}
}

void test05()
{
	myarry<person>arr(10);

	person p1("孙悟空", 999);
	person p2("韩信", 20);
	person p3("妲己", 20);
	person p4("赵云", 30);
	person p5("安其拉", 10);

	//将数据插入到数组中
	arr.push_back(p1);
	arr.push_back(p2);
	arr.push_back(p3);
	arr.push_back(p4);
	arr.push_back(p5);

	//打印数组
	printpersonarry(arr);

	//输出容量
	cout << "arr容量：" << arr.getcapacity() << endl;

	//输出大小
	cout << "arr大小：" << arr.getsize() << endl;
}


int main() {

	test04();

	test05();

	system("pause");

	return 0;
}