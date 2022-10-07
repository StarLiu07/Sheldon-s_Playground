#include<iostream>
using namespace std;

//作用：函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//交换函数

//1.值传递
void myswap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.地址传递
void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

//3.引用传递
void myswap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main3() {

	int a = 10;
	int b = 20;
	myswap01(a, b);//值传递，形参不会修饰实参

	cout << "值传递" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap02(&a, &b);//地址传递，形参会修饰实参

	cout << "地址传递" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	myswap03(a, b);//引用传递，形参会修饰实参

	cout << "引用传递" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}