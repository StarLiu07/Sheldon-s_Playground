#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class mycompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};

void test02()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

	//使用函数对象，改变算法策略，变为排序规则为从大到小
	sort(v.begin(), v.end(), mycompare());

	cout << "—————————" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

int main() {

	test02();

	system("pause");

	return 0;
}