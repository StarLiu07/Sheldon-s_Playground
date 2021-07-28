#include<iostream>
using namespace std;

/*const修饰指针有三种情况：
1.const修饰指针——常量指针
2,const修是常量——指针常量
3.const即修饰指针，又修饰常量*/

int main5() {

	//const修饰指针 
	int a = 10;
	int b = 10;

	const int* p = &a;//常量指针
	//指针指向的值不可以改，指向可以改
	//*p = 20; 错误
	p = &b;//正确

	//const修饰常量
	int* const p2 = &a;//指针常量
	//指向不可以修改，指针指向的值可以修改
	*p2 = 20;
	//p2 = &b;//错误

	//const修饰指针和常量
	const int* const p3 = &a;
	//指针的指向和指针指向的值都不可以改
	//*p = 40;
	//p = &b;


	system("pause");

	return 0;
}