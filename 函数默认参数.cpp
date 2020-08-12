#include<iostream>
using namespace std;

int func(int a, int b = 10, int c = 20) {
	return a + b + c;
}

int main() {
	cout << "ret = " << func(30) << endl;
	cout << "ret = " << func(10, 20) << endl;


	system("pause");
	return 0;
}