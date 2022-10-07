#include<iostream>
using namespace std;

//布尔类型作用：代表真或假的值
/*
* 布尔类型只有两个值
* true--真（本质是1）
* false--假（本质是0）
*/
//布尔类型占一个字节的大小

int maintt() {

	//1.创建布尔类型
	
	bool flag = true;//true代表真
	cout << flag << endl;
	
	flag = false;//false代表假
	cout << flag << endl;

	//本质上 1代表真 0代表假

	//2.查看布尔类型所占的内存空间

	cout << "布尔类型所占的空间：" << sizeof(bool) << endl;

	system("pause");

	return 0;
}