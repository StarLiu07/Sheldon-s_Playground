#include <iostream>
using namespace std;
#include <vector>

/*函数原型：
empty();  判断容器是否为空
capacity();  返回容器中元素的个数
size();  返回容器中元素的个数
resize(int num);  重新指定容器的长度为num，若容器变长，则以默认值填充新位置
				  如果容器变短，则末尾超出容器长度的元素
resize(int num,elem);  重新指定容器的长度为num，若容器变长则以elem值填充新位置
				       如果容器变短，则末尾超出容器长度的元素被删除*/

void printvector2(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test03()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printvector2(v1);

	if (v1.empty()) //为真 代表容器为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15,100); //利用该重载版本，可以指定默认填充值，参数2
	printvector2(v1);//如果重新指定的过长，默认用0填充新的位置

	v1.resize(5);
	printvector2(v1); //如果重新指定短了，会删除超出部分
}

int main3() {

	system("pause");

	return 0;
}