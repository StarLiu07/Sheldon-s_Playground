#include<iostream>
using namespace std;

//函数的声明作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义
//函数的声明可以有多次，但函数的定义只能有一次

//比较函数，实现两个整型相互比较，并且返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明（虽然vs2019已经解决了）
int max(int a, int b);

int main5() {

	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << "较大的值为：" << c << endl;

	system("pause");

	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}
