#include "manager.h"

//构造函数
manager::manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//显示个人信息
void manager::showinfo()
{
	cout << "职工编号为：" << this->m_id;
	cout << "\t职工姓名为：" << this->m_name;
	cout << "\t职工部门为：" << this->getdeptname();
	cout << "\t岗位职责：完成老板交给的任务，并下发任务给员工" << endl;
}

//获取部门名称
string manager::getdeptname()
{
	return string("经理");
}