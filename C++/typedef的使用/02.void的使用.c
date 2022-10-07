#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void的使用
//1.无类型  不可以通过void创建变量，原因是编译器不知道分配多少内存

void test01()
{
    //void a = 10;
}

//c语言并不严谨，若没加限定，可能不符合语法规范但依旧能够编译成功
//2.限定函数返回值 限定函数参数
int func()
{
    return 10;
}

void test02()
{
    printf("%d\n",func());
}

//3.万能指针
void test03()
{
    void* p = NULL;
    printf("p的内存空间大小%d\n",sizeof(p));

    int* pInt = NULL;
    char* pChar = NULL;

    //pChar = pInt;//报错不兼容
    pChar = (char*)pInt;//把int* 强转为char*
    pChar = p;//不通过强制类型转换就可以转换为任意类型的指针
}

int main()
{
    //printf("hello world\n");
    //test02();
    test03();
    return 0;
}