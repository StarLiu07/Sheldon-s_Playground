#include"workermanger.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

workermanger::workermanger()
{
	this->m_empnum = 0;
	this->m_emparry = NULL;
}

void workermanger::show_menu()
{
	cout << "*********************************" << endl;
	cout << "******欢迎使用职工管理系统*******" << endl;
	cout << "*********0.退出管理程序**********" << endl;
	cout << "*********1.增加职工信息**********" << endl;
	cout << "*********2.显示职工信息**********" << endl;
	cout << "*********3.删除离职职工**********" << endl;
	cout << "*********4.修改职工信息**********" << endl;
	cout << "*********5.查找职工信息**********" << endl;
	cout << "*********6.按照编号排序**********" << endl;
	cout << "*********7.清空所有文档**********" << endl;
	cout << "*********************************" << endl;
	cout << endl;
}

//退出功能
void workermanger::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//添加职工
void workermanger::add_emp()
{
	cout << "请输入您要添加的职工人数" << endl;
	int add_num;
	cin >> add_num;

	if (add_num > 0)
	{
		//添加
		//计算新空间大小
		int newsize = this->m_empnum + add_num;

		//开辟新空间
		worker** newspace = new worker* [newsize];

		//将原来空间下的数据拷贝到新空间
		if (m_emparry != NULL)
		{
			for (int i = 0; i < newsize; i++)
			{
				newspace[i] = this ->m_emparry[i];
			}
		}

		for (int i = 0; i < add_num; i++)
		{
			int id;
			string name;
			int dselect;

			cout << "请输入第" << i + 1 << "个人的编号" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个人的姓名" << endl;
			cin >> name;

			cout << "请输入第" << i + 1 << "个人的职位" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dselect;

			worker* worker = NULL;
			switch (dselect)
			{
			case1:
				worker = new employee(id,name,dselect);
				break;
			case2:
				worker = new manager(id, name, dselect);
				break;
			case3:
				worker = new boss(id, name, dselect);
				break;
			default:
				break;
			}
			//将创建职工职责，保存到数组中
			newspace[this->m_empnum + i] = worker;
		}
		//释放原有空间
		delete[] this->m_emparry;

		//更改新空间指向
		this->m_emparry = newspace;

		//更新新的职工人数
		this->m_empnum = newsize;

		//提示添加成功
		cout << "成功添加" << add_num << "名新员工" << endl;
	}
	else
	{
		cout << "输入有误" << endl;
	}

	//按任意键后清屏回到上级目录
	system("pause");
	system("cls");
}

workermanger::~workermanger()
{

}