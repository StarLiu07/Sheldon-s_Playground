#include <iostream>
using namespace std;
#include <map>

//mapÈİÆ÷ÖĞµÄÅÅĞò

class mycompare
{
public:
	bool operator()(int v1, int v2)const
	{
		//½µĞò
		return v1 > v2;
	}
};

void test06()
{
	map<int, int,mycompare> m1;
	m1.insert(make_pair(1, 10));
	m1.insert(make_pair(2, 20));
	m1.insert(make_pair(5, 50));
	m1.insert(make_pair(3, 30));
	m1.insert(make_pair(4, 40));

	for (map<int, int,mycompare>::iterator it = m1.begin(); it != m1.end(); it++)
	{
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

int main() {

	test06();

	system("pause");

	return 0;
}