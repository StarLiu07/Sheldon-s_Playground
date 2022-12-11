//使用if else语句
#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Type, and I shall repeat." << endl; //输入我会重复
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch; //如果换行则执行
        else
            //通过在编码位置+1的形式来加密语句
            cout << ++ch; //否则执行此语句
        cin.get(ch);
    }
    //尝试 ch + 1 而不是 ++ch 以获得有趣的效果
    cout << "\nPlease excuse the slight confusion.\n"; //请原谅轻微的混乱
    return 0;
}