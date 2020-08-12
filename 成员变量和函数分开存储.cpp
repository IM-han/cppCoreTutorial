#include<iostream>
using namespace std;

class Person {

public:

	int mA; //非静态变量占对象空间
	static int mB; //静态变量不占对象空间
	Person() {
		mA = 100;
	}
	//函数不占对象空间，所有函数共享一个函数实例
	void func() {
		cout << "mA: " << this->mA << endl;
	}

	//静态函数也不占对象空间
	static void sfunc() {

	}
};

int main() {

	cout << sizeof(Person) << endl;

	system("pause");
	return 0;
}