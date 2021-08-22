#include "经理.h"

	manager::manager(int id, string name, int num)
	{
		this->m_id = id;
		this->m_name = name;
		this->m_num = num;
	}

	void manager::showemp()
	{
		cout << "编号：" << this->m_id;
		cout << "姓名：" << this->m_name;
		cout << "职位：经理";
		cout << "职责：完成老板交给的任务，发布任务给员工" << endl;
	}

	void manager::getinfo()
	{


	}
