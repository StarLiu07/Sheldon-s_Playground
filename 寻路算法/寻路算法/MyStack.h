#pragma once

template<class T>
class MyStack{
	T*		pBuff;	//内存首地址
	size_t	len;	//元素个数
	size_t	maxLen; //内存大小
public:
	MyStack(){ pBuff = NULL; len = maxLen = 0; }
	~MyStack(){ if (pBuff) delete[] pBuff; pBuff = NULL; len = maxLen = 0; }

	//入栈
	void push(const T& data);
	//出栈
	void pop(){ len--; }
	//获取栈顶元素
	T getTop(){ return pBuff[len - 1]; }
	//判断栈是否为空
	bool isEmpty(){ return (len == 0); }
};

template<class T>
//入栈
void MyStack<T>::push(const T& data){
	//1 判断是否需要重开内存
	if (len <= maxLen){
		//2 获取新开内存大小
		maxLen = maxLen + (((maxLen >> 1) > 1) ? (maxLen >> 1) : 1);
		//3 新开内存
		T* pTemp = new T[maxLen];
		//4 是否原来有内存
		if (pBuff){
			//5 拷贝原来的数据
			memcpy(pTemp, pBuff, sizeof(T)*len);
			//6 释放原有内存
			delete[] pBuff;
		}

		//7 pBuff指向新开内存
		pBuff = pTemp;
	}

	//8 新数据进栈
	pBuff[len++] = data;
}