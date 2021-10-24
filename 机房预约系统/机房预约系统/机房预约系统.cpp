#include <iostream>
using namespace std;
#include "Identity.h"
#include <fstream>
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

//进入管理员子菜单界面
void managerMenu(Identity*& manager)
{
	while (true)
	{
		//调用管理员子菜单
		manager->opermenu();

		//将父类指针 转为子类指针，调用子类里其他接口
		Manager* man = (Manager*)manager;

		int select = 0;

		//接受用户选择
		cin >> select;

		if (select == 1) //添加账号
		{
			cout << "添加账号" << endl;
			man->addperson();
		}
		else if (select == 2) //查看账号
		{
			cout << "查看账号" << endl;
			man->showperson();
		}
		else if (select == 3) //查看机房信息
		{
			cout << "查看机房" << endl;
			man->showcomputer();
		}
		else if (select == 4) //清空预约
		{
			cout << "清空预约" << endl;
			man->cleanfile();
		}
		else
		{
			//注销登录
			delete manager; //销毁堆区对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//登录功能  参数1 操作文件名称  参数2 操作身份类型
void LoginIn(string fileName, int type)
{
	//父类指针，用于指向子类对象
	Identity* person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//准备接收用户的信息
	int id = 0;
	string name;
	string pwd;

	//判断身份
	if (type == 1) //学生身份
	{
		cout << "请输入你的学号:" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入您的职工号：" << endl;
		cin >> id;
	}

	cout << "请输入用户名：" << endl;
	cin >> name;

	cout << "请输入密码：" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生身份验证
		int fId; //从文件中读取的id号
		string fName; //从文件中获取的姓名
		string fPwd; //从文件中获取密码
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//与用户输入的信息做对比
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证登录成功" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入到学生身份的子菜单


				return;
			}
		}
	}
	else if (type == 2)
	{
		//教师身份验证
		int fId; //从文件中获取id号
		string fName; //从文件中获取的姓名
		string fPwd; //从文件中获取的密码
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "老师验证登录成功" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师子菜单



				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员身份验证
		string fName; //从文件中获取的姓名
		string fPwd; //从文件中获取密码

		while (ifs >> fName && ifs >> fPwd)
		{
			if (fName == name && fPwd == pwd)
			{
				cout << "管理员验证登录成功" << endl;
				system("pause");
				system("cls");

				//new Manager(name, pwd);
				person = new Manager(name, pwd);

				//进入管理员子菜单界面
				managerMenu(person);

				return;
			}
		}
	}

	cout << "验证登录失败" << endl;
	system("pause");
	system("cls");

	return;
}

int main() {
	
	int select = 0; //用于接受用户的选择

	while (true)
	{
		cout << "====================== 欢迎来到机房预约系统 =======================" << endl;
		cout << endl << "请输入你的身份" << endl;
		cout << "\t\t------------------------------------\n";
		cout << "\t\t|            1.学生代表             |\n";
		cout << "\t\t|                                   |\n";
		cout << "\t\t|            2.老    师             |\n";
		cout << "\t\t|                                   |\n";
		cout << "\t\t|            3.管 理 员             |\n";
		cout << "\t\t|                                   |\n";
		cout << "\t\t|            0.退    出             |\n";
		cout << "\t\t|                                   |\n";
		cout << "\t\t------------------------------------\n";
		cout << "请输入你的选择：";

		cin >> select;//接受用户选择

		switch (select) //根据用户选择 实现不同接口
		{
		case 1:  //学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2: //老师身份
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3: //管理员身份
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0: //退出系统
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default: 
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}


	system("pause");
	
	return 0;
}