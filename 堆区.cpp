#include<iostream>
using namespace std;

//����
int* func1() {
	int* a = new int(10);
	return a;
}

//ջ��
int* func2() {
	int a = 20;
	return &a;
}

int main() {

	//����
	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;

	//ջ��
	int* s = func2();
	cout << *s << endl;
	s = func2();
	cout << *s << endl;

	system("pause");
	return 0;
}