#include<iostream>
using namespace std;

//字符型：字符型变量用于显示单个字符
//语法：char ch='a';
/*
* 注意1：在显示字符型变量时用单引号括起来，不要用双引号
* 注意2：单引号内只能是一个字符，不能是字符串
*/

int maine() {

	//1.字符型变量的创建:char 变量名='一个字符'
	char ch = 'b';
	cout << "ch=" << ch << endl;

	//2.字符型变量的大小
	cout << "字符型变量所占空间：" << sizeof(ch) << endl;

	//3.字符型变量常见的错误
	char ch2 = 'b';//正确演示
	//char ch2 = "b";//创建字符变量时，要用单引号
	//char ch2 = 'abcdef';//创建字符型变量时，单引号内只能有一个字符

	//4.字符型变量对应的ASCII编码
	//a-97
	//A-95
	cout << (int)ch << endl;//（int）变量名

	system("pause");

	return 0;
}