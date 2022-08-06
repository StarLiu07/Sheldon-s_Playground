//递归
#include <iostream>
using namespace std;

void countdown(int n);

int main()
{
    countdown(4);

    return 0;
}

void countdown(int n)
{
    //每个递归调用都会创建自己的一套变量，所以在这个例子将会有5个独立的n变量
    cout << "Counting down ... " << n << endl;
    if (n > 0)
        countdown(n-1); //函数调用自己
    cout << n << ": Kaboom!" << endl;
}