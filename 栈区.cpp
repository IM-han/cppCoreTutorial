#include<iostream>
using namespace std;

int* func() {
	int a = 10;
	return &a;
}

int main() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}