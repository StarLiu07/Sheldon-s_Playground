#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int * func()
{
    int a = 10;//栈上创建的变量
    return &a;
}

void test01()
{
    int *p = func();
    printf("%d\n",*p);//报错，因为a早就被释放了(不过有的编译器有保护机制，第一次打印能够打印出10，但第二次不行)
}

char* getString()
{
    char str[] = "hello world";
    return str;
}

void test02()
{
    char * p = NULL;
    p = getString();
    printf("p = %s\n",p);//依旧报错，还是因为str中的数据早已被释放
}

int main()
{

    //test01();
    test02();

    return 0;
}