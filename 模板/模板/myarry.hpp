// 自己的通用数据类
#pragma once 
#include <iostream>
using namespace std;

template<class T>
class myarry
{
public:

	//有参构造  参数  容量
	myarry(int capacity)
	{
		this->m_capacity = capacity;

		this->m_size = 0;

		this->paddress = new T[this->m_capacity];
	}

	//返回数组大小
	int getsize()
	{
		return this->m_size;
	}

	//拷贝构造
	myarry(const myarry& arr)
	{
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		
		//深拷贝
		this->paddress = new T[arr.m_capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}

	//operator= 防止浅拷贝问题
	myarry& operator=(const myarry& arr)
	{
		//先判断原来堆区是否有数据，如果有先释放
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		//深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->paddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}

	//尾插法
	void push_back(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->paddress[this->m_size] = val; //在数组末尾插入数据
		this->m_size++; // 更新数组大小
	}

	//尾删法
	void pop_back()
	{
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//通过下标的方式访问数组中的元素  arr[0] = 100
	T& operator[](int index)
	{
		return this->paddress[index];
	}

	//返回数组的容量
	int getcapacity()
	{
		return this->m_capacity;
	}
	


	//析构函数
	~myarry()
	{
		if (this->paddress != NULL)
		{
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}

private:

	T* paddress; //指针指向堆区开辟的真实数组

	int m_capacity; //数组容量

	int m_size;//数据大小
};