#include<iostream>
using namespace std;

//全局区和代码区都是代码执行前的区域

//全局区：存放全局变量和静态变量以及常量（字符常量和其他常量）
//该区域的数据在程序结束后由操作系统释放

//全局变量(不在函数体中)
int g_a = 10;
int g_b = 10;

//const修饰的全局变量,全局常量
int c_g_a = 10;
int c_g_b = 10;

int main2() {

	//全局变量，静态变量，常量

	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl;

	//静态变量 在局部变量前加一个static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a地址：" << (int)&s_a << endl;
	cout << "静态变量s_b地址：" << (int)&s_b << endl;

	//常量
	//字符串常量  用双引号引起来的
	cout << "字符串常量的地址：" << (int)&"hello word" << endl;

	//const修饰变量
	//const修饰全局变量
	cout << "全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为：" << (int)&c_g_b << endl;

	//const修饰局部变量
	const int c_l_a = 10; //c-const g-global(全局) l-local(局部)
	const int c_l_b = 10; 

	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;


	system("pause");

	return 0;
}