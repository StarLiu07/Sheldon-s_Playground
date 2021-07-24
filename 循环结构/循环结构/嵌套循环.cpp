#include<iostream>
using namespace std;

//嵌套循环：在循环体中在嵌套一层循环解决一些实际问题

int mainasd() {

	//利用嵌套循环实现星图

	//打印一行星图
	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	system("pause");

	return 0;
}