#include<iostream>
using namespace std;
#include<fstream>

class person
{
public:
	char m_name[64];//姓名
	int m_age;//年龄
};

void test03()
{
	//1.包含头文件

	//2.创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3.打开文件
	//ofs.open("person.txt",ios::out | ios::binary)

	//4.写文件
	person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(person));

	//5.关闭文件
	ofs.close();
}

int main3() {

	test03();

	system("pause");

	return 0;
}