#include <iostream>
using namespace std;

//本质：string是C++风格的字符串，而string本质是一个类
/*string类内部封装了很多成员方法
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部负责*/

/*string(): ——创建一个空的宁符串例如; string str;
string(const char* s) ;  ——/使用宁符串s初始化
string(const string& str) ;  —— /使用一个string对象初始化另一个string对象
string(int n,char c) ; —— 使用n个字符c初始化*/

void test01()
{
	string s1;//默认构造

	const char* str = "hello world";
	string s2(str);

	cout << "s2 = " << s2 << endl;

	string s3(s2);

	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}