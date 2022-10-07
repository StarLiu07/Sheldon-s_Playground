#include "boss.h"

//构造函数
boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//显示个人信息
void boss::showinfo()
{
	cout << "职工编号为：" << this->m_id;
	cout << "\t职工姓名为：" << this->m_name;
	cout << "\t职工部门为：" << this->getdeptname();
	cout << "\t岗位职责：管理公司所有事务" << endl;
}

//获取部门名称
string boss::getdeptname()
{
	return string("老板");
}