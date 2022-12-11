#include <iostream>
const int Cities = 5;
const int Years = 4;
using namespace std;

int main()
{
    const char* cities[Cities] =  
    {
        "Gribble City",
        "Gribbletown",
        "new Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] = //二维数组
    {
        {96,100,87,101,105}, //values for maxtemps[0]
        {95,98,91,107,104}, //values for maxtemps[1]
        {97,101,93,108,107}, //values for maxtemps[2]
        {98,103,95,109,108} //values for maxtemps[3]
    };

    cout << "2008 - 2011 年最高气温" << endl;
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    
    return 0;
}