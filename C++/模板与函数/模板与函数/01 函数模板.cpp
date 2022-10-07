#include <iostream>
using namespace std;

/*语法：template<typename T>
  函数定义*/

//两个整形交换的函数
void swapint(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapdouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T> //声明一个模板 告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
} 

void test01()
{
	int a = 10;
	int b = 20;

	//swapint(a, b);
	//利用函数模板交换
	//两种方式
	//1.自动类型推导
	//myswap(a, b);

	//2.显式指定类型
	myswap<int>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 1.1;
	double d = 2.2;

	swapdouble(c, d);

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}


 
int main1() {

	test01();

	system("pause");

	return 0;
}