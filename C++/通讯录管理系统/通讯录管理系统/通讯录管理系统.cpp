#include<iostream>
using namespace std;
#include<string>

//创建菜单函数：用户选择功能的界面
void showmenu1()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

//添加联系人（姓名，性别，年龄，联系电话，家庭住址）
//联系人结构体
struct people
{
	string name;
	string sex;
	int age;
	int phone;
	string home;
};

//通讯录结构体
struct phone
{
	struct people perarr[];
};

//添加联系人函数
void more(struct people peoarr[])
{
	for (int i = 0; i < 1000; i++)
	{
		people s;
		cout << "姓名：" << endl;
		cin >> s.name;
		cout << "性别：" << endl;
		cin >> s.sex;
		cout << "年龄：" << endl;
		cin >> s.age;
		cout << "联系电话：" << endl;
		cin >> s.phone;
		cout << "家庭住址：" << endl;
		cin >> s.home;
		int temp = 0;
		for (int i = temp; i < 1000; i++)
		{
			peoarr[i].name = s.name;
			peoarr[i].sex = s.sex;
			peoarr[i].age = s.age;
			peoarr[i].phone = s.phone;
			peoarr[i].home = s.home;
			break;
		}
		temp = i;
		break;
	}
}

int main1() {

	/*通讯录是一个可以记录亲人、好友信息的工具。本教程主要利用C++来实现一个通讯录管理系统系统中需要实现的功能如下:
	·添加联系人:向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
	·显示联系人:显示通讯录中所有联系人信息
	·删除联系人:按照姓名进行删除指定联系人
	·查找联系人:按照姓名查看指定联系人信息
	·修改联系人:按照姓名重新修改指定联系人
	·清空联系人:清空通讯录中所有信息
	·退出通讯录:退出当前使用的通讯录*/

	//创建通讯录数组
	struct people peoarr[1000];

	

	//推出功能：退出通讯录
	
	int select = 0;

	while (true)
	{
		showmenu1();
		cin >> select;  //收集用户的输入

		if (select == 1)//添加联系人
		{
			more(peoarr);
			break;
		}
		else if (select == 2)//显示联系人
		{
			break;
		}
		else if (select == 3)//删除联系人
		{
			break;
		}
		else if (select == 4)//查找联系人
		{
			break;
		}
		else if (select == 5)//修改联系人
		{
			break;
		}
		else if (select == 6)//清空联系人
		{
			break;
		}
		else //退出通讯录
		{
			cout << "欢迎下次使用" << endl;
			break;
		}
	}
	cout << "姓名：" << peoarr[1].name << " 性别：" << peoarr[1].sex << " 年龄：" << peoarr[1].age
		<< " 联系电话：" << peoarr[1].phone << " 家庭住址：" << peoarr[1].home << endl;
	
	

	system("pause");

	return 0;
}