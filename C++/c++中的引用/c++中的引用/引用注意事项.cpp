#include<iostream>
using namespace std;

/*引用注意事项：
1.引用必须初始化
2.引用在初始化后，不可以改变
*/

int main2() {

	int a = 10;


	//1.引用必须初始化
	//int& b;//错误，必须要初始化
	int& b = a;

	//2.引用在初始化后不可以改变

	int c = 20;
	b = c;//赋值操作，而不是更改引用

	//三个都会输出20是因为 c的值赋值给了b，而b与a指向同一个地址，当修改了b的值a的值也会随之修改
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");

	return 0;
}