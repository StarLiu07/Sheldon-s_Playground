#include<iostream>
using namespace std;

//作用：通过重载递增运算符，实现自己的整形数据

class myinteger
{
	friend ostream& operator<< (ostream& cout, myinteger  myint);

public:

	//重载前置++运算符
	//返回引用是为了一直对一个数进行递增操作 
	myinteger& operator++()
	{
		//先进行++运算
		m_num++;

		//再将自身做返回
		return *this;
	}

	//重载后置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置
	myinteger operator++(int)
	{
		//先 记录当时结果
		myinteger temp = *this;

		//后 递增
		m_num++;

		//最后将记录结果返回
		return temp;
	}

	myinteger()
	{
		m_num = 0;
	}

private:
	int m_num = 0;
};

//重载左移运算符
ostream& operator<< (ostream & cout, myinteger  myint)
{
	cout << myint.m_num;
	return cout;
}

void test03()
{
	myinteger myint;

	cout << myint << endl;

}

void test04()
{
	myinteger myint;
	//前置递增
	cout << ++myint << endl;

	//后置递增
	cout << myint++ << endl; //这里要把42行第2个形参改为 myintgeger myint 不加&
	cout << myint << endl;

}



int main3() {

	//test03();
	test04();

	system("pause");

	return 0;
}