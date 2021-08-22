#include "老板.h"

	boss::boss(int id, string name, int num)
	{
		this->m_id = id;
		this->m_name = name;
		this->m_num = num;
	}

	void boss::showemp()
	{
		cout << "编号：" << this->m_id;
		cout << "姓名：" << this->m_name;
		cout << "职位：老板";
		cout << "职责：管理公司所有事物" << endl;
	}

	void boss::getinfo()
	{


	}