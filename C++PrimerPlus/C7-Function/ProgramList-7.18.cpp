//函数指针
#include <iostream>
using namespace std;

double betsy(int);
double pam(int);

//第二个参数是一个指向double类型的指针，该函数接受一个int类型参数
void estimate(int lines,double (*pf)(int));

int main()
{
    int code;
    cout << "How many lines of code do you need?";
    cin >> code;
    cout << "Here's Betsy's estimate: " << endl;
    estimate(code,betsy); //估计时间
    cout << "Here's Pam's estimate: " << endl;
    estimate(code,pam); //估计时间

    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines,double (*pf)(int))
{
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hout(s)" << endl;
}