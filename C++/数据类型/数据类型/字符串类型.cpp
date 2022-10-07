#include<iostream>
using namespace std;

//字符串型作用：用于表示一串字符
//c风格字符串：char 变量名[]="字符串值"
//c++风格字符串： string 变量名="字符串值"
//字符型创建用单引号，字符串型创建用双引号（注意区分）

int mainr() {

	//1.c风格字符串
	//注意事项：char 变量名[]
	//注意事项2：等号后面要用双引号，包含起来字符串
	char str1[] = "hello world";
	cout << "hello world\t" <<str1<< endl;

	//2.c++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;

	system("pause");

	return 0;
}