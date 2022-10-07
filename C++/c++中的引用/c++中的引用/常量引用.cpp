#include<iostream>
using namespace std;

//作用：常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参

//打印数据函数
void show(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

int main() {

	//int a = 10;

	//加上const之后，编译器将代码改为 int temp = 10; int& ref = temp;
	//const int& ref = 10;//引用必须引用一块合法的内存空间（引用可修改的左值）
	//ref = 20;//这个将会报错，因为加入const后变为只读，不可修改

	int a = 100;
	show(a);

	system("pause");

	return 0;
}