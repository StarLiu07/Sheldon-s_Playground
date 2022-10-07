#include<iostream>
using namespace std;

//空指针:指针变量指向内存中编号位0的空间
//用途：初始化指针变量
//注意：空指针指向的内存是不可以访问的

int main3() {

	//1.空指针用于给指针变量初始化
	int* p = NULL;

	//2.空指针是不能访问的
	//0~255之间的内存编号是系统占用的，因此不能访问
	//*p;
	
	

	system("pause");

	return 0;
}