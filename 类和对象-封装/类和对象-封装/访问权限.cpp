#include<iostream>
using namespace std;

/*类在设计时，可以把属性和行为放在不同的权限下，加以控制
访问权限有三种：
1.public    公共权限  类内可以访问，类外可以访问
2.protected 保护权限  类内可以访问，类外不可以访问  儿子可以访问父亲的保护内容
3.private   私有权限  类内可以访问，类外不可以访问  儿子不可以访问父亲的私有内容
*/

class person
{
	//公共权限
public:
	string name;

	//保护权限
protected:
	string car;

	//私有权限
private:
	int password;

public:
	void func()
	{
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}
};

int main2() {

	person p1;//实例化具体对象

	p1.name = "李四";
	//p1.car = "奔驰";//保护权限的内容在类外无法访问
	//p1.password = 123;//私有权限的内容在类外无法访问

	system("pause");

	return 0;
}