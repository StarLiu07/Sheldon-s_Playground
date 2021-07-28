#include<iostream>
using namespace std;

int main2() {

	//指针所占空间
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;

	//在32位操作系统下，指针是占4个字节空间大小，不管是什么数据类型
	//在64位操作系统下，指针是占8个字节空间大小
	cout << "sizeof int * = " << sizeof(int*) << endl;
	cout << "sizeof int * = " << sizeof(float*) << endl;
	cout << "sizeof int * = " << sizeof(double*) << endl;
	cout << "sizeof int * = " << sizeof(char*) << endl;

	system("pause");

	return 0;
}