#include<iostream>
using namespace std;

//do...while作用:满足循环条件，执行循环语句
//语法：do{循环语句} while{循环条件}
//与while的区别：do...while会先执行一次循环语句，再判断循环条件

int maingg() {

	//在屏幕中输出0到9十个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);//注意do...while里的while括号后面要加分号



	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	//do...while会先执行一次循环语句

	system("pause");

	return 0;
}