#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 算法主要是由头文件<algorithm><functional><numeric> 组成
* <algorithm>是所有STL头文件中最大的一个，范围涉及到比较、交换、查找、遍历操作、复制、修改等等
* <numeric>体积很小，只包括几个在序列上面进行简单数学运算的函数模板
* <functional>定义了一些类模板，用以声明函数对象
*/

//普通函数
void print01(int val)
{
	cout << val << "  ";
}

//仿函数
class print02
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

//for_each
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}