#include<iostream>
using namespace std;
#include "功能实现.h"
#include <fstream>
#define FILENAME "person.txt"

//0.退出系统  1.增加职工  2.显示职工  3.删除职工  4.修改职工  5.查找职工   6.编号排序  7.清空文档

int main() {

	
	workermanger wm;


	while (true)
	{
		//显示菜单
		wm.showmenu();

		int choose = 0;
		cin >> choose;

		switch (choose)
		{
		case 0://推出菜单
			wm.tui();
			break;
		case 1://增加员工
			wm.addemp();
			break;
		case 2://显示职工
			wm.show_emp();
			break;
		case 3://删除职工
			wm.delete_emp();
			break;
		case 4: //修改职工
			wm.xiygai();
			break;
		case 5: //查找职工
			wm.find_emp();
			break;
		case 6: //编号排序
			wm.sort_emp();
			break;
		case 7:
			wm.clean();
			break;
		}
	}

	system("pause");

	return 0;
}