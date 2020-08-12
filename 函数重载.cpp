#include<iostream>
using namespace std;

//无参数
void func() {
	cout << "func的调用" << endl;
}
//整型参数
void func(int a) {
	cout << "func(int a )的调用" << endl;
}
//双浮点参数
void func(double a) {
	cout << "func(double a )的调用" << endl;
}
//一个整型，一个双浮点型参数
void func(int a, double b) {
	cout << "func(int a, double b)的调用" << endl;
}
//一个双浮点，一个整型参数
void func(double b, int a) {
	cout << "func(double b, int a)的调用" << endl;
}
//引用参数
void func(int& a) {
	cout << "func(int& a)的调用" << endl;
}
//常量引用参数
//void func(const int& a) {
//	cout << "func(const int& a)的调用" << endl;
//}


int main() {
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");
	return 0;
}