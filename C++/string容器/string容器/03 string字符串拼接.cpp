#include <iostream>
using namespace std;

//实现在字符串末尾拼接字符串

/*●string& operator+=(const char* str);  //重载+=操作符
string& operator+=(const char C);  string& operator+=(const char C);
●string& operator+=(const string& str);  //重载+=操作符
string& appEnd(const char *S);  //把字符串s连接到当前字符串结尾
string& append(const char *s，int n);  //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);  //同operator+=(const string& str)
●string& append(const string &s， int pos, int n); )  /字符串s中从pos开始的n个字符连接到字符串结尾*/

void test03()
{
	string str1 = "我";

	str1 += "爱玩游戏";

	cout << "str1 = " << str1 << endl;

	str1 += ':';

	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";

	str1 += str2;

	cout << "str1 = " << str1 << endl;

	string str3 = "I ";
	str3.append("love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcde", 4);
	cout << "str3 = " << str3 << endl;

	//str3.append(str2);

	//str3.append(str2, 0, 3);//只截取LOL
	str3.append(str2, 4, 3);//只截取DNF
	cout << "str3 = " << str3 << endl;
}

int main3() {

	test03();

	system("pause");

	return 0;
}