#include<iostream>
using namespace std;

//创建一个整型类
class myinteger1
{
	friend ostream& operator<< (ostream& cout, myinteger1 myint);

public:

	//前置递减
	myinteger1& operator--()
	{
		m_num--;

		return *this;
	}

	//后置递减
	myinteger1 operator--(int)//用int来占位
	{
		//建立临时变量
		myinteger1 temp = *this;

		//对m_num进行递减操作
		m_num--;

		//返回值 因为这里返回一个局部变量，而局部变量在函数用完后会被释放，所以只返回值
		return temp;
	}

	myinteger1()
	{
		m_num = 1;
	}

private:
	int m_num;
};

//全局函数进行左移运算符重载
ostream& operator<< (ostream & cout,myinteger1 myint)
{
	cout << myint.m_num;

	return cout;
}

void test05()
{
	myinteger1 myint;

	cout << myint << endl;
}

void test06()
{
	myinteger1 myint;
	//前置递减
	cout << --myint << endl;

	//后置递减
	cout << myint-- << endl;
	cout << myint << endl;
}

int main4() {

	cout << "这个为test05" << endl;
	test05();

	cout << "\n这个为test06" << endl;
	test06();

	//:)
	system("pause");

	return 0;
}