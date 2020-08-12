#include<iostream>
using namespace std;

//返回局部变量引用
int& test01() {
	int a = 10;
	return a;
}

//返回静态变量引用
int& test02() {
	static int a = 20;
	return a;
}

int main() {
	
	//返回局部变量
	int& ref = test01();
	cout << "ref = " << ref << endl; //局部变量用一次就被释放
	//cout << "ref = " << ref << endl;

	//返回静态变量
	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;


	//函数做左值,必须返回引用
	test02() = 1000;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");
	return 0;
}