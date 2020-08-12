#include<iostream>
using namespace std;

//引用的本质是一个指针常量

void func(int& ref) {
	ref = 100;
}

int main() {
	int a = 10;

	int& ref = a; //引用自动转换为int* const ref = &a, 
	ref = 20; //自动转换为 *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;


	system("pause");
	return 0;

}