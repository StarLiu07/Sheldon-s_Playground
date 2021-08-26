#include <iostream>
using namespace std;
#include <map>

/*
* 函数原型：
* insert(elem);  在容器中插入数据
* clear();  清除所有元素
* erase(pos);  删除pos迭代器所指的元素，返回下一个元素的迭代器
* erase(beg,end);  删除区间[beg,end]的所有元素，返回下一个元素的迭代器
* erase(key);  删除容器中值为key的元素
*/

void printmap2(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test04()
{
	map<int, int> m1;

	//插入
	//第一种
	m1.insert(pair<int, int>(1, 10));

	//第二种
	m1.insert(make_pair(2, 20));

	//第三种
	m1.insert(map<int, int>::value_type(3, 30));

	//第四种
	m1[4] = 40;

	//[]不建议插入，用途 可以用key访问到value
	//cout << m1[4] << endl;

	printmap2(m1);

	//删除
	m1.erase(m1.begin());
	printmap2(m1);

	m1.erase(3); //按照key删除
	printmap2(m1);

	//清空
	//m1.erase(m1.begin(), m1.end());
	m1.clear();
	printmap2(m1);

}

int main3() {

	test04();

	system("pause");

	return 0;
}