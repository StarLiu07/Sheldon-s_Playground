#include "功能实现.h"
#include "员工.h"
#include "工人.h"
#include "经理.h"
#include "老板.h"
#include <cstdlib>

//构造函数
workermanger::workermanger()
{

	//判断文件是否为空

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;

		//初始化数据
		//初始化记录人数
		this->emp_num = 0;
		//初始化数组指针
		this->workerarry = NULL;
		//初始化文件是否为空
		this->emp_file = true;


		ifs.close();
		return;
	}

	//文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//	cout << "文件为空" << endl;
	}
	
	int num = this->get_empnum();
	this->emp_num = num;

	this->workerarry = new worker * [this->emp_num];

	duqu();

	//for (int i = 0; i < 1; i++)
	//{
	//	cout << "编号：" << this->workerarry[i]->m_id << " "
	//		<< "姓名：" << this->workerarry[i]->m_name << " "
	//		<< "职位：" << this->workerarry[i]->m_num << endl;

	//}
}

//显示菜单
void workermanger::showmenu()
{
	cout << "**********************************" << endl;
	cout << "*******欢迎使用员工管理系统*******" << endl;
	cout << "***********1.增加员工*************" << endl;
	cout << "***********2.显示员工*************" << endl;
	cout << "***********3.删除员工*************" << endl;
	cout << "***********4.修改员工*************" << endl;
	cout << "***********5.查找员工*************" << endl;
	cout << "***********6.编号排序*************" << endl;
	cout << "***********7.清空员工*************" << endl;
	cout << "**********************************" << endl;
	cout << endl;
	cout << "请选择您要进行的操作" << endl;
}

//退出菜单
void workermanger::tui()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
	
}

//保存员工
void workermanger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->emp_num; i++)
	{
		ofs << this->workerarry[i]->m_id << "  "
		 << this->workerarry[i]->m_name << "  "
		 << this->workerarry[i]->m_num << endl;
	}

	ofs.close();
}

int workermanger::get_empnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}

	ifs.close();

	return num;
}

//读取员工
void workermanger::duqu()
{
	//读取文件
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	string name;
	int did;

	int index = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker = NULL;

		if (did == 1)
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2)
		{
			worker == new manager(id, name, did);
		}
		else
		{
			worker = new boss(id, name, did);	
		}

		this->workerarry[index] = worker;

		index++;
	}

	ifs.close();
}

//增加员工
void workermanger::addemp()
{
	int empnum;
	cout << "请输入要增加的人数" << endl;
	cin >> empnum;
	
	//计算新空间大小
	int newsize = this->emp_num + empnum;

	//开辟新空间
	worker** newspace = new worker * [newsize];

	//将原来空间下的数据拷贝到新空间
	if (this->workerarry != NULL)
	{
		for (int i = 0; i < this->emp_num; i++)
		{
			newspace[i] = this->workerarry[i];
		}
	}


	for (int i = 0; i < empnum; i++)
	{
		int id;
		cout << "请输入员工编号" << endl;
		cin >> id;

		string name;
		cout << "请输入员工姓名：" << endl;
		cin >> name;

		int did;
		cout << "请选择员工部门" << endl;
		cout << "1.员工" << endl;
		cout << "2.经理" << endl;
		cout << "3.老板" << endl;
		cin >> did;

		worker* worker = NULL;
		switch (did)
		{
		case 1:
			worker = new employee(id, name, did);
			break;
		case 2:
			worker = new manager(id, name, did);
			break;
		case 3:
			worker = new boss(id, name, did);
		}
		newspace[this->emp_num + i] = worker;
	}
	//释放原有空间
	delete[] this->workerarry;

	//更改新空间指向
	this->workerarry = newspace;

	//更新职工人数
	this->emp_num = newsize;

	this->save();


	system("pause");
	system("cls");
}

//显示员工
void workermanger::show_emp()
{
	//duqu();

	if (emp_file)
	{
		cout << "文件不存在或文件为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->emp_num; i++)
		{
			this->workerarry[i]->showemp();
		}
	}

	system("pause");
	system("cls");

}

//删除员工
void workermanger::delete_emp()
{
	int id;
	cout << "请输入要删除的员工编号" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == workerarry[i]->m_id)
		{
			for (int j = 1; j < this->emp_num - 1; i++)
			{
				this->workerarry[i] = this->workerarry[i + 1];
			}
			this->emp_num--;

			this->save();
		}
	}

	system("pause");
	system("cls");
}

//修改员工 
void workermanger::xiygai()
{
	int id = 0;
	cout << "请输入要修改的员工的编号" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == this->workerarry[i]->m_id)
		{
			cout << "已找到该员工，该员工姓名为：" << this->workerarry[i]->m_name << endl;
			
			cout << "请输入修改后的编号：" << endl;
			cin >> this->workerarry[i]->m_id;

			cout << "请输入修改后的姓名：" << endl;
			cin >> this->workerarry[i]->m_name;

			cout << "请输入修改后的部门：" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> this->workerarry[i]->m_num;

			cout << "修改后的信息为：" << endl;
			this->workerarry[i]->showemp();
		}
		else
		{
			cout << "未找到该员工，请核实您的编号" << endl;
		}
	}

	this->save();

	system("pause");
	system("cls");
}

//查找员工
void workermanger::find_emp()
{
	int id = 0;
	cout << "请输入您要查找的人员编号" << endl;
	cin >> id;

	for (int i = 0; i < this->emp_num; i++)
	{
		if (id == this->workerarry[i]->m_id)
		{
			this->workerarry[i]->showemp();
		}
	}

	system("pause");
	system("cls");
}

//编号排序
void workermanger::sort_emp()
{
	int choose = 0;

	cout << "请选择您要进行的方式" << endl;
	cout << "1.按职工编号进行升序" << endl;
	cout << "2.按职工编号进行降序" << endl;
	cin >> choose;

	for (int i = 0; i < this->emp_num; i++)
	{
		//认定最大值或最小值
		int max = i;

		for (int j = i + 1; j < this->emp_num; j++)
		{
			//升序
			if (choose == 1)
			{
				if (this->workerarry[max]->m_id > this->workerarry[j]->m_id)
				{
					max = j;
				}
			}
			//降序
			else if (choose == 2)
			{
				if (this->workerarry[max]->m_id < this->workerarry[j]->m_id)
				{
					max = j;
				}

			}

			if (max != i)
			{
				worker* temp = this->workerarry[i];
				this->workerarry[i] = this->workerarry[max];
				this->workerarry[max] = temp;
			}
		}
	}

	cout << "排序后结果" << endl;
	this->save();
	this->show_emp();
}

//清空数据
void workermanger::clean()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::trunc);//把原有文件删除重新创建

	//删除员工
	for (int i = 0; i < this->emp_num; i++)
	{
		delete this->workerarry[i];
		this->workerarry[i] = NULL;
	}

	this->workerarry = NULL;
	this->emp_num = 0;

	system("pause");
	system("cls");
}

//析构函数
workermanger::~workermanger()
{
	if (this->workerarry != NULL)
	{
		delete[] this->workerarry;
		this->workerarry = NULL;
	}
}