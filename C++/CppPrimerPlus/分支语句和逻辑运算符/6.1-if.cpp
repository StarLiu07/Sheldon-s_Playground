//使用if语句
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') //句末退出
    {
        if(ch == ' ') //检查ch是否为空
            ++spaces;
        ++total; //每次都执行
        cin.get(ch); //这行语句能够把输入的句子换成下一个
        //如：当输入 I like book. 时，ch的值开始为I,当执行完这行语句后将会换为 (I后面的空格).
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence" << endl;
    return 0;
}