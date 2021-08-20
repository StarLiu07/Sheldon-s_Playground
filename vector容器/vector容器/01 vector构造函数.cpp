#include <iostream>
using namespace std;
#include <vector>

//功能：vector数据结构非常相似，也称为单端数组
//vector与普通数组区别：不同之处在于数组是静态空间，而vector可以动态扩展
//动态扩展：并不是在原空间之后继续新空间，而是找更大的内存空间，然后将原数据拷贝到新空间，释放原空间

/*
函数原型：
vector<T> v;  采用模板实现类实现，默认构造函数
vector(v.begin(),v.endl())  将v[begin(),end()]区间中的元素拷贝给本身
vector(n,elem);  构造函数将n个elem拷贝给本身
vector(const vector &vec);  拷贝构造函数
*/

void printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test01() {

	vector<int> v1; //默认构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);

	}
	printvector(v1);

	//通过区间方式进行构造
	vector<int> v2(v1.begin(), v1.end());

	printvector(v2);

	//n个elem方式构造
	vector<int> v3(10, 100);
	printvector(v3);

	//拷贝构造
	vector<int> v4(v3);
	printvector(v4);
}

int main1() {

	test01();

	system("pause");

	return 0;
}