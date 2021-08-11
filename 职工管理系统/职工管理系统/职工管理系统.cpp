#include<iostream>
using namespace std;
#include "workermanger.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <cstdlib>

int main() {

	////测试代码：
	//worker* worker = NULL;
	//worker = new employee(1,"张三",1);
	//worker->showinfo();



	//实例化管理者对象
	workermanger wm;

	//记录用户选择
	int choose = 0;

	//

	while (true)
	{
		//调用show_menu函数
		wm.show_menu();

		cout << "请选择您要进行的操作" << endl;
		cin >> choose;

		switch (choose)
		{
		case 0://退出系统
			wm.exitsystem();
			break;

		case 1://增加职工
			wm.add_emp();
			break;

		case 2://显示职工
			break;

		case 3://删除职工
			break;

		case 4://修改职工
			break;

		case 5://查找职工
			break;

		case 6://编号排序
			break;

		case 7://清空文档
			break;

		default:
			system("cls");

		}
	}



	system("pause");

	return 0;
}