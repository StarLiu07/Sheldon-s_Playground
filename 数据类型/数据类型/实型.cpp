#include<iostream>
using namespace std;

//实型（浮点型）：作用用于表示小数
/*浮点型变量分为两种：
* 1.单精度：float：8字节  7位有效数字
* 2.双精度：double：8字节 15=16位有效数字
* 两者的区别在于表示的有效数字范围不同
*/

int mainc() {

	//默认情况下 输出一个小数，会显示6位有效数字

	//1.单精度 float
	float f1 = 3.14f;//通常会在变量值后加f：把数据类型换为float(默认double)

	cout << "f1=" << f1 << endl;

	//2.双精度 double
	double d1 = 3.14;

	cout << "d1=" << d1 << endl;

	//统计float和double所占用的空间
	cout << "float所占用的空间：" << sizeof(float) << endl;
	cout << "double所占用的空间：" << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2;//3*10^2;
	cout << f2 << endl;

	float f3 = 3e-2;//3*0.1^2
	cout << f3 << endl;

	system("pause");

	return 0;
}