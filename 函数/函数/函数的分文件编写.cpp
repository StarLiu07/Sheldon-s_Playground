#include<iostream>
using namespace std;
#include "swap.h"

/*作用：让代码结构更加清晰
函数份文件编写一般有4个步骤
1.创建后缀名为.h的头文件
2.创建后缀名为.cpp的源文件
3.在头文件中写函数的声明
4.在源文件中写函数的定义*/

//实现两个数字进行交换的函数
//void swap(int a, int b);

////函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}


int main() {
	int a = 10;
	int b = 20;
	swap(a, b);


	system("pause");

	return 0;
}