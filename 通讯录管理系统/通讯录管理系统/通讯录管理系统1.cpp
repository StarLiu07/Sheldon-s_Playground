#include<iostream>
using namespace std;
#define MAX 1000 //最大值

//创建菜单函数：用户选择功能的界面
void showmenu()
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

//联系人结构体
struct person
{
	string name;
	string sex;
	int age;
	string phone;
	string home;
};

//通讯录结构体
struct addressbooks
{
	//通讯录中保存的联系人数组
	struct person personarry[MAX];

	//通讯录中当前维护的联系人个数
	int m_size;
};

//1.添加联系人
void addperson(addressbooks* p)
{
	//判断通讯录是否已满，如果满了就不再添加
	if (p->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
	}
	else
	{
		//添加联系人
		//姓名
		string name;
		cout << "请输入一个姓名：" << endl;
		cin >> name;
		p->personarry[p->m_size].name = name;//用->的原因是当指针想要访问结构体里的内容是要用->
		
		//性别
		string sex;
		cout << "请输入一个性别：" << endl;
		cin >> sex;
		p->personarry[p->m_size].sex = sex;


		//年龄
		int age;
		cout << "请输入一个年龄：" << endl;
		cin >> age;
		p->personarry[p->m_size].age = age;


		//联系方式
		string phone;
		cout << "请输入一个电话号码：" << endl;
		cin >> phone;
		p->personarry[p->m_size].phone = phone;

		//家庭地址
		string address;
		cout << "请输入一个住址：" << endl;
		cin >> address;
		p->personarry[p->m_size].home = address;

		p->m_size++;

		cout << "添加成功" << endl;

		system("pause");

		system("cls");
	}
}

//显示联系人的函数
void showperson(addressbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "您的通讯录还没有人，请按1添加" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{

			cout << "姓名：" << abs->personarry[i].name << " 性别：" << abs->personarry[i].sex
				<< " 年龄：" << abs->personarry[i].age << " 联系方式：" << abs->personarry[i].phone
				<< " 住址：" << abs->personarry[i].home << endl;
		}
	}
	system("pause");
	system("cls");
}

//检测联系人是否存在，如果存在，返回联系人在数组中的位置，不存在，返回-1
int isexist(addressbooks* p1,string name)
{
	for (int i = 0; i < p1->m_size; i++)//把数组里的人都遍历一遍
	{
		if (p1->personarry[i].name == name)//把通讯录里的名字与要寻找的名字进行对比
		{
			return i;//返回此人在数组中的下标
		}
	}
	return -1;//如果都没找到就返回-1
}

//删除指定的联系人
void deleteperson(addressbooks* abs)
{
	cout << "请输入您要删除的联系人的姓名" << endl;

	string name;
	cin >> name;
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//查到
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personarry[i] = abs->personarry[i + 1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}


//查找联系人函数
void findperson(addressbooks* abs)
{
	cout << "请输入您要查找的人员姓名：" << endl;
	string name;
	cin >> name;

	int num = isexist(abs, name);
	if (num != -1)
	{
		cout << "姓名：" << abs->personarry[num].name << " 性别：" << abs->personarry[num].sex
			<< " 年龄：" << abs->personarry[num].age << " 联系方式：" << abs->personarry[num].phone
			<< " 住址：" << abs->personarry[num].home << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//修改联系人函数
void modifyperson(addressbooks* abs)
{
	cout << "请输入您要修改的人员姓名" << endl;
	string name;
	cin >> name;
	int i = isexist(abs, name);
	if (i != -1)
	{
		//名字
		cout << "请输入修改后的名字：" << endl;
		string name1;
		cin >> name1;
		abs->personarry[i].name = name1;

		//性别
		cout << "请输入修改后的性别：" << endl;
		string sex;
		cin >> sex;
		abs->personarry[i].sex = sex;

		//年龄
		cout << "请输入修改后的年龄：" << endl;
		int age;
		cin >> age;
		abs->personarry[i].age = age;

		//联系方式
		cout << "请输入修改后的联系方式：" << endl;
		string phone;
		cin >> phone;
		abs->personarry[i].phone = phone;

		//住址
		cout << "请输入修改后的住址：" << endl;
		string home;
		cin >> home;
		abs->personarry[i].home = home;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "查无此人" << endl;
	}
}

//清空联系人函数
void cleanperson(addressbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空" << endl;
	system("psuse");
	system("cls");
}

int main() {

	//创建通讯录结构体变量
	addressbooks abs;
	//初始化通讯录中当前的人员个数
	abs.m_size = 0;

	
	int select = 0;

	while (true)
	{
		showmenu();
		cin >> select;  //收集用户的输入

		if (select == 1)//添加联系人
		{
			addperson(&abs);//利用地址传递可以修饰实参
		}
		else if (select == 2)//显示联系人
		{
			showperson(&abs);
		}
		else if (select == 3)//删除联系人
		{
			deleteperson(&abs);
		}
		else if (select == 4)//查找联系人
		{
			findperson(&abs);
		}
		else if (select == 5)//修改联系人
		{
			modifyperson(&abs);
		}
		else if (select == 6)//清空联系人
		{
			cleanperson(&abs);
		}
		else //退出通讯录
		{
			cout << "欢迎下次使用" << endl;
			break;
		}
	}

	system("pause");

	return 0;
}