#include<iostream>
using namespace std;

//利用指针作为函数的参数，可以修改实参的值

//实现两个函数进行交换的函数
void swap01(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 << endl;
}

void swap02(int* p, int* p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp; 

}

int main7() {

	//1.值传递
	int a = 10;
	int b = 20;
	//swap01(a, b);
	

	//地址传递
	//如果是地址传递，可以修饰实参
	swap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}