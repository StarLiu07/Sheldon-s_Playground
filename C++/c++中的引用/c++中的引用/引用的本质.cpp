#include<iostream>
using namespace std;

//本质：引用本质在c++内部实现是一个指针常量

//发现是引用，转换为 int *const ref = &a;
void func(int& ref)
{ 
	ref = 100;//ref是引用，转换为*ref = 100;
}

int main5() {

	int a = 10;

	//自动转换为int*const ref = 10;指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动帮助我们转换为：*ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);

	system("pause");

	return 0;
}