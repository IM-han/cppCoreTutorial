#include<iostream>
using namespace std;

class Person {
public:
	int m_B;
	static int m_A;

	static void func() {
		cout << "func调用：" << endl;
		m_A = 100;

	}

private:
	static void func2() {
		cout << "func2调用" << endl;
	}
};

//类外初始化
int Person::m_A = 10;

void test01() {
	//静态成员函数调用方式
	//1、通过对象
	Person p1;
	p1.func();

	//2、通过类名
	Person::func();

}

int main() {
	test01();


	system("pause");
	return 0;
}