#include<iostream>
using namespace std;

//值传递：函数调用时实参将数值传入给形参
//值传递时，如果形参发生，并不会影响实参

//定义函数，实现两个书进行交换

//如果一个函数不需要返回值，声明的时候可以写void
void swap1(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	return;
}

int main3() {

	int a = 10;
	int b = 20;
	//函数的形参发生改变，并不会影响实参
	swap(a, b);

	system("pause");

	return 0;
}