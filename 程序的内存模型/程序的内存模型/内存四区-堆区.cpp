#include<iostream>
using namespace std;

//堆区和栈区都是在程序运行之后的一个区域
/*堆区
由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
在C++中主要利用new在堆区开辟内存
*/

int*func2()
{
	//利用new关键字，可以将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据，放在堆区
	int *p = new int(10);//new关键字开辟出了一个堆区，而指针p指向堆区中的地址
	return p;
}

int main4() {

	int* p = func2();//用一个指针接受在函数中传回来的地址，而这个地址指向堆区，所以不会被释放
	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}