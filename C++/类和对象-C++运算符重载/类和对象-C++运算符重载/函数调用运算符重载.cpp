#include<iostream>
using namespace std;

/*·函数调用运算符()也可以重载
·由于重载后使用的方式非常像函数的调用，因此称为仿函数
·仿函数没有固定写法，非常灵活*/

//打印输出类
class myprint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test09()
{
	myprint myprint;

	myprint("hello world");//由于使用起来非常类似于函数调用，所以称为仿函数
}

//仿函数非常灵活，没有固定的写法
//加法类
class add
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test10()
{
	add p;
	cout << p(1, 2) << endl;

	//匿名函数对象
	cout << add()(1, 2) << endl;
}

int main() {

	test09();

	test10();

	system("pause");

	return 0;
}