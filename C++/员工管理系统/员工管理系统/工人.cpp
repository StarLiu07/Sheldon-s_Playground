#include "工人.h"

	employee::employee(int id, string name, int num)
	{
		this->m_id = id;
		this->m_name = name;
		this->m_num = num;
	}

	void employee::showemp()
	{
		cout << "编号：" << this->m_id;
		cout << "姓名：" << this->m_name;
		cout << "职位：工人";
		cout << "职责：完成经理交给的任务" << endl;
	}

	void employee::getinfo()
	{


	}
