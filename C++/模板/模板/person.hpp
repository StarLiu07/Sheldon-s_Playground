#pragma once
#include<iostream>
using namespace std;

template<class T1, class T2>
class person
{
public:

	person(T1 name, T2 age);

	void showperson();

	T1 m_name;
	T2 m_age;
};

template<class T1, class T2>
person< T1, T2>::person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}

template<class T1, class T2>
void person< T1, T2>::showperson()
{
	cout << "ÐÕÃû£º" << this->m_name << " ÄêÁä£º" << this->m_age << endl;
}