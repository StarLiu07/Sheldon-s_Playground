#include<iostream>
using namespace std;

//作用：引用时可以作为函数的返回值存在的
//注意：不要返回局部变量引用
//用法：函数调用作为左值

//1.不要返回局部变量引用
int& test01()
{
	int a = 10;//局部变量存放在四区中的 栈区
	return a;
}

//函数调用作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区的数据在程序结束后有系统释放
	return a;
}

int main4() {

	//int& ref = test01();
	//cout << "ref = " << ref << endl;//第一次正确，是因为编译器做了保留
	//cout << "ref = " << ref << endl;//第二次错误，因为a的内存已经被释放 

	int& ret = test02();
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;

	test02() = 1000;//如果函数的返回值是引用，那么这个函数可以作为左值
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;

	system("pause");

	return 0;
}