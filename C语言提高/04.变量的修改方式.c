#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test01()
{
    //1.直接修改
    int a = 10;
    a = 20;
    printf("%d\n",a);

    //2.间接修改
    int *p = &a;
    //*p解引用
    *p = 200;
    printf("%d\n",a);
}

//自定义数据类型练习
typedef struct Person
{
    char a;
    int b;
    char c;
    int d;
}MyPerson;

void test02()
{
    MyPerson p1 = {'a',10,'b',20};

    //直接修改b属性
    p1.d = 100;
    printf("%d\n",p1.d);

    //间接修改d属性
    char* p_p1 = &p1;
    // p_p1->d = 1000;
    // printf("%d\n",p1.d);

    printf("%d\n",*(int *)(p_p1 + 12));
    printf("%d\n",*(int *)(int*)p_p1 + 3);
}

int main(){

    test01();
    test02();

    return 0;
}