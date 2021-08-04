#include<iostream>
using namespace std;

/*两种分类方式:
按参数分为:有参构造和无参构造
按类型分为:普通构造和拷贝构造
三种调用方式:
括号法
显示法
显示法隐式转换法*/

//1.分类
class person
{
public:
	//构造函数
	person() //无参构造 （也叫默认构造）
	{
		cout << "person无参构造函数调用" << endl;
	}
	person(int a) //有参构造
	{
		age = a;
		cout << "person有参构造函数调用" << endl;
	}

	//拷贝构造函数
	person(const person& p)
	{
		//将传入的人身上所有属性拷贝到我身上
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}

	//析构函数
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
	int age;
};
//调用
void test01()
{
	//1.括号法
	//person p; //默认构造函数调用
	//person p2(10); //调用有参构造函数
	//person p3(p2); //调用拷贝函数构造

	//注意事项
	//调用默认构造的时候，不要加(),因为编译器会认为是一个函数声明
	//person p();

	//cout << "p2的年龄：" << p2.age << endl;
	//cout << "p3的年龄：" << p3.age << endl;

	//2.显示法
	person p1;
	person p2 = person(10);
	person p3 = person(p2);

	//	person(10);//匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象
	//注意事项2：不要利用拷贝构造函数，初始化匿名对象  编译器会认为person (p3) == person p3;

	//隐式转换法
	person p4 = 10; // 相当于写了 person p4 = person(10); 有参构造
	person p5 = p4; // 拷贝构造	 
}

int main2() {

	test01();

	system("pause");

	return 0;
}