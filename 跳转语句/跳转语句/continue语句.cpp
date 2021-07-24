#include<iostream>
using namespace std;

//continue语句作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

int mainasd() {

	for (int i = 0; i < 100; i++)
	{
		//如果是奇数就输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;//可以筛选条件，执行到此就不在向下执行，执行下一次循环
		}
		cout << i << endl;
		
	}

	system("pause");

	return 0;
}