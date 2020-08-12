#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;
	cout << "重新赋值后" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}