//#include"workermanger.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"
#include "workermanger.h"

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
		this->m_empnum = 0;
		//初始化数组指针
		this->m_emparry = NULL;
		//初始化文件是否为空
		this->m_fileisempty = true;


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

	//文件存在，并且记录数据
	int num = this->get_num();
	//cout << "职工人数为：" << num << endl;

	this->m_empnum = num;

	//开辟空间
	this->m_emparry = new worker * [this->m_empnum];
	init_emp();

	//测试代码
	//for (int i = 0; i < this->m_empnum; i++)
	//{
	//	cout << "职工编号：" << this->m_emparry[i]->m_id << "  职工姓名：" << this->m_emparry[i]->m_name
	//		<< "  部门编号：" << this->m_emparry[i]->m_deptid << endl;
	//}
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
	int add_num = 0;
	cin >> add_num;

	if (add_num > 0)
	{
		//添加
		//计算新空间大小
		int newsize = this->m_empnum + add_num;

		//开辟新空间
		worker** newspace = new worker* [newsize];

		//将原来空间下的数据拷贝到新空间
		if (this->m_emparry != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
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
			case 1:
				worker = new employee(id,name,dselect);
				break;
			case 2:
				worker = new manager(id, name, dselect);
				break;
			case 3:
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
		
		this->save();
		
	}
	else
	{
		cout << "输入有误" << endl;
	}

	//按任意键后清屏回到上级目录
	system("pause");
	system("cls");
}

//保存员工
void workermanger::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开——写文件

	//将内容保存
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparry[i]->m_id << "  "
			<< this->m_emparry[i]->m_name << "  "
			<< this->m_emparry[i]->m_deptid << endl;
	}

	//关闭
	ofs.close();
}

int workermanger::get_num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int num = 0; //记录人数
	
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;  //统计人数
	}

	ifs.close();

	return num;
}

//初始化员工
void workermanger::init_emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int did;

	int index = 0;
	
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* worker = NULL;
		if (did == 1)//普通职工
		{
			worker = new employee(id, name, did);
		}
		else if (did == 2) //经理
		{
			worker = new manager(id, name, did);
		}
		else //老板
		{
			worker = new boss(id, name, did);
		}

		this->m_emparry[index] = worker;

		index++;
	}

	ifs.close();
}

//显示职工
void workermanger::showemp()
{
	//判断文件是否为空
	if (this->m_fileisempty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		for (int i = 0; i < m_empnum; i++)
		{
			this->m_emparry[i]->showinfo();
		}
	}
	system("pause");
	system("cls");
}

//删除职工
void workermanger::del_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}

	cout << "请输入想要删除的职工的编号" << endl;
	int id = 0;
	cin >> id;

	int index = this->isexist(id);

	if (index != -1)//说明职工存在，并且要删除掉index位置上的职工
	{
		//数据前移
		for (int i = index; i < this->m_empnum - 1; i++)
		{
			this->m_emparry[i] = this->m_emparry[i + 1];
		}
		this->m_empnum--;//更新数组中记录的人员个数

		//数据同步更新到文件中
		this->save();

		cout << "删除成功" << endl;
	}
	else
	{
		cout << "删除失败，未找到该职工" << endl;
	}

	//清屏操作
	system("pause");
	system("cls");
}

//判断职工是否存在，如果存在返回职工所在数组中的位置，不存在返回-1

int workermanger::isexist(int id)
{
	int index = -1;

	for (int i = 0; i < m_empnum; i++)
	{
		if (this->m_emparry[i]->m_id == id)
		{
			//找到职工
			index = i;
			break;
		}

	}
	return index;
}

//修改职工
void workermanger::mod_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件为空或不存在" << endl;
	}
	else
	{
		cout << "请输入您要修改的职工的编号" << endl;
		int id = 0;
		cin >> id;

		int index = this->isexist(id);

		if (index != -1) //找到职工
		{
			delete this->m_emparry[index];

			int newid;
			string newname;
			int newdid;

			cout << "已找到" << id << "号员工，请输入新的职工编号" << endl;
			cin >> newid;

			cout << "请输入新的姓名" << endl;
			cin >> newname;

			cout << "请输入新的部门编号" << endl;
			cout << "1.员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;

			cin >> newdid;

			worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new employee(newid, newname, newdid);
				break;
			case 2:
				worker = new manager(newid, newname, newid);
				break;
			case 3:
				worker = new boss(newid, newname, newid);
				break;
			}
			cout << "添加成功" << endl;
			this->m_emparry[index] = worker;

			this->save();
		}
		else
		{
			cout << "未找到该职工" << endl;
		}

	}
	system("pause");
	system("cls");
}

void workermanger::find_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入查找方式" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按职工姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//编号查
		{
			int id;
			cout << "请输入要查找的职工编号" << endl;
			cin >> id;

			int ret = isexist(id);
			if (ret != -1)
			{
				//找到职工
				cout << "查找成功，职工信息如下：" << endl;
				this->m_emparry[ret]->showinfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)//姓名查
		{
			string name;
			cout << "请输入查找的姓名" << endl;
			cin >> name;

			//加入判断是否查到的标志
			bool flag = false;//默认为找到

			for (int i = 0; i < this->m_empnum; i++)
			{
				if (this->m_emparry[i]->m_name == name)
				{
					cout << "查找成功，职工编号为：" << this->m_emparry[i]->m_id << "的职工信息如下" << endl;
					this->m_emparry[i]->showinfo();
					flag = true;
				}

			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
 		}
		else
		{
			cout << "输入选项有误" << endl;
		}
	}

	system("pause");
	system("cls"); 
}

//按编号排序
void workermanger::sort_emp()
{
	if (this->m_fileisempty)
	{
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.按照职工编号升序" << endl;
		cout << "2.按照职工编号降序" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_empnum; i++)
		{
			int mainormax = i;//声明最小值或最大值下标
			for (int j = i + 1; j < this->m_empnum; j++)
			{
				if (select == 1)
				{
					if (this->m_emparry[mainormax]->m_id > this->m_emparry[j]->m_id)
					{
						mainormax = j;
					}
				}
				else
				{
					if (this->m_emparry[mainormax]->m_id < this->m_emparry[j]->m_id)
					{
						mainormax = j;
					}
				}
			}
			//判断一开始认定的 最小值 或 最大值 是不是计算出来的 最小值 或最大值 如果不是 交换数据
			if (i != mainormax)
			{
				worker* temp = this->m_emparry[i];
				this->m_emparry[i] = this->m_emparry[mainormax];
				this->m_emparry[mainormax] = temp;
			}

		}
	}
	cout << "排序成功，排序后结果" << endl;
	this->save();//保存	
	this->showemp();//显示
}

//清空文件
void workermanger::clean_file()
{
	cout << "确定清空吗" << endl;
	cout << "1.确定" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();

		if (this->m_emparry != NULL)
		{
			//删除堆区的每个职工对象
			for (int i = 0; i < this->m_empnum; i++)
			{
				delete this->m_emparry[i];
				m_emparry[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_emparry;
			m_emparry = NULL;
			this->m_empnum = 0;
			this->m_fileisempty = true;
		}
		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");

}

workermanger::~workermanger()
{
	if (this->m_emparry != NULL)
	{
		delete[] this->m_emparry;
		this->m_emparry = NULL;
	}
}