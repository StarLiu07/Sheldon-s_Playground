#include <iostream>
using namespace std;

//1.查找

void test04()
{
	//int find(const string& str, int pos = 0) const;  查找str第一次出现位置从pos开始查找
	string str1 = "abcdefg";

	int pos = str1.find("de");

	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串" << endl;
		cout << "pos = " << pos << endl;
	}

	//rfind 和 find区别
	//rfind从右往左查找  find从左往右查找
	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;
	
}

//2.替换
void test05()
{
	//string& replace(int pos,int a, const string& str);  替换从pos开始n个字符为字符串str
	string str1 = "abcdefg";

	//从1号位置起 3个字符 替换为"1111"
	str1.replace(1, 3, "111");

	cout << "str1 = " << str1 << endl;
}

int main4() {

	test04();

	test05();

	system("pause");

	return 0;
}