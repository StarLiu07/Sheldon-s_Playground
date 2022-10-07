#include <iostream>
using namespace std;

/*
* 概念：
* 重载函数调用操作符的类，其对象为函数对象
* 函数对象使用重载的()使，行为类似函数调用，也叫仿函数
* 
* 本质：
* 函数对象（仿函数）是一个类，不是一个函数
*/

/*
* 特点：
* 函数对象在使用时，可以向普通函数那样调用，可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
*/

class myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1.函数对象在使用时，可以向普通函数那样调用，可以有参数，可以有返回值
void test01()
{
	myadd myadd;
	cout << myadd(10, 10) << endl;
}

class myprint
{
public:

	myprint()
	{
		this->count = 0;
	}

	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count; //内部自己的状态
};

//2.函数对象超出普通函数的概念，函数对象可以有自己的状态
void test02()
{
	myprint myprint;
	myprint("Hello World");
	myprint("Hello World");
	myprint("Hello World");
	myprint("Hello World");

	cout << "myprint调用次数为：" << myprint.count << endl;
}

//3.函数对象可以作为参数传递

void doprint(myprint& mp, string test)
{
	mp(test);
}

void test03()
{
	myprint myprint;
	doprint(myprint, "Hello C++");
}

int main() {

	//test01();

	//test02();

	test03();

	system("pause");

	return 0;
}