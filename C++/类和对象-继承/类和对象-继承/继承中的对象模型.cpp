#include<iostream>
using namespace std;

class base4
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son4 : public base4
{
public:
	int m_d;
};

//利用开发人员命令提示工具查看对象模型
//跳转盘符 F:
//跳转文件路径cd具体路径下
//查看命名
// c1 / d1 reportSingleClassLayout类名文件名

void test05()
{
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到的，但是确实被继承下去了
	cout << "size of son = " << sizeof(son4) << endl;
}

int main3() {

	system("pause");

	return 0;
}