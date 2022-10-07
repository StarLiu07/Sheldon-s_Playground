#pragma once;
#include<iostream>
using namespace std;

class worker
{
public:
	virtual void showemp() = 0;

	virtual void getinfo() = 0;

	int m_id;
	string m_name;
	int m_num;
	
};