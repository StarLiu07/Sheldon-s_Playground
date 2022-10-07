#include<iostream>
using namespace std;

//goto语句作用：可以无条件跳转语句
//语法：goto 标记;
//解释：如果标记的位置存在，执行到goto语句时，会跳转到标记的位置

int main() {

	//goto语句

	cout << "1." << endl;

	cout << "2." << endl;

	goto FLAG;

	cout << "3." << endl;

	cout << "4." << endl;

	FLAG:
	
	cout << "5." << endl;
	//在程序中尽量避免使用goto语句，以免造成程序流程混乱

	system("pause");

	return 0;
}