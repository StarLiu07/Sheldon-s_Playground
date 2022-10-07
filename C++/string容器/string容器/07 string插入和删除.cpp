#include <iostream>
using namespace std;

//string& insert(int pos,const char& s);  插入字符
//string& insert(int pos,const string& str);  插入字符
//string& insert(int pos,int n,char c);  在指定位置插入n个字符c
//string& erase(int pos,int n = npos);  删除从pos开始的n个字符

void test08()
{
	string str = "hello";

	//插入
	str.insert(1, "111");

	cout << "str = " << str << endl;

	//删除
	str.erase(1, 3);

	cout << "str = " << str << endl;
}

int main7() {

	test08();

	system("pause");

	return 0;
}