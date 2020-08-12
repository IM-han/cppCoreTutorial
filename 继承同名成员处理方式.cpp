#include<iostream>
using namespace std;

class Base {
public:
	int m_A;

public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base - func()�ĵ���" << endl;
	}

	void func(int a) {
		cout << "Base - func(int a)�ĵ���" << endl;
	}

};

class Son : public Base {

public:
	int m_A;

public:
	Son() {
		m_A = 200;
	}

	void func() {
		cout << "Son - func()�ĵ���" << endl;
	}
};

void test01() {
	Son s;

	cout << "Son�µ�m_A = " << s.m_A << endl;
	cout << "Base�µ�m_A = " << s.Base::m_A << endl;

	s.func();
	s.Base::func();
	s.Base::func(10);
}

int main() {

	test01();

	system("pause");
	return 0;
}