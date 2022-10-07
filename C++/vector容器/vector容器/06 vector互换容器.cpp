#include <iostream>
using namespace std;
#include <vector>

//函数原型：swap(vec);  将vec与本身的元素互换

void printvector5(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//1.基本使用
void test06()
{	
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	cout << "交换前" << endl;
	printvector5(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printvector5(v2);

	cout << "交换后" << endl;
	v1.swap(v2);
	printvector5(v1);
	printvector5(v2);;
}

//2.实际用途
//巧用swap可以收缩内存空间
void test07()
{
	vector<int> v3;
	for (int i = 0; i < 100000; i++)
	{
		v3.push_back(i);
	}

	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;

	v3.resize(3);  //重新指定大小
	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;

	//巧用swap
	vector<int>(v3).swap(v3);

	cout << "v3的容量为：" << v3.capacity() << endl;
	cout << "v3的大小为：" << v3.size() << endl;
}

int main6() {

	test06();
	test07();

	system("pause");

	return 0;
}