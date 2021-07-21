#include<iostream>
using namespace std;

//转义字符作用：用于一些不能显示出来的ASCII字符
/*现阶段常用：
* \n(换行：将当前位置换到下一行开头)
* \\（代表一个反斜线字符"\"）
* \t(水平制表符：跳到下一个TAB位置)
*/

int mainff() {

	//换行符：\n
	
	cout << "hello world" << endl;//上下两个效果相等
	cout << "hello world\n";

	//反斜杠:\\
	
	//cout<<"\"<<endl;
	cout << "\\" << endl;//第一个反斜杠告诉编译器要输出一个特殊字符，第二个反斜杠输出

	//水平制表符：\t

	cout << "aaaa\thello world" << endl;//一个\t有8个空格（有对齐的效果）
	cout << "a\thello world" << endl;
	cout << "aaaaa\thello world" << endl;



	system("pause");

	return 0;
}