#include<iostream>
using namespace std;

int main() {

	for (int i = 1; i < 10; i++) //´òÓ¡9ÐÐ
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << j << "*" << i << "=" << j * i << "\t";
		}
		cout << endl;
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}