#include<iostream>
using namespace std;

//值传递
void mySwap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//地址传递
void mySwap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void mySwap3(int& a, int& b) {
	cout << a << endl;
	int temp = a;

	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;

	mySwap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	/*mySwap2(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/

	mySwap3(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}