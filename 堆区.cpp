#include<iostream>
using namespace std;

//堆区
int* func1() {
	int* a = new int(10);
	return a;
}

//栈区
int* func2() {
	int a = 20;
	return &a;
}

int main() {

	//堆区
	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;

	//栈区
	int* s = func2();
	cout << *s << endl;
	s = func2();
	cout << *s << endl;

	system("pause");
	return 0;
}