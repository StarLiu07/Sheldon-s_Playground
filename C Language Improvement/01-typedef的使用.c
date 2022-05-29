#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//typedef的使用  可以简化关键字
// struct Person
// {
//     //姓名
//     char name[64];
//     //年龄
//     int age;
// };
// typedef struct Person MyPerson;

//以上代码等同于
typedef struct Person
{
    //姓名
    char name[64];
    //年龄
    int age;
}MyPerson;

void test01()
{
    //创建一个Person
    //c语言下创建结构体必须前面必须加上struct关键字
    struct Person p1 = {"张三",18};
    //使用typedef后不用加struct
    MyPerson p2 = {"李四",19};
}

//2.区分数据类型
void text02()
{
    //此时p1的数据类型为char*,p2的数据类型为char
    char* p1,p2;

    //利用typedef给数据类型起一个别名
    typedef char* PCHAR;
    PCHAR p3,p4;//此时的p3,p4的数据类型皆为PCHAR,也就是char*
    //41行代码也等价于 char* p1,*p2;
}

//3.提高移植性
typedef int MY_INT;//到时候只需要换这行的int就可以切换所有的数据类型
void test03()
{
    MY_INT a = 3;

    MY_INT b = 4;
}

int main()
{   
    printf("你好\n");
    return 0;
}