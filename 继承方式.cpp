#include<iostream>
using namespace std;


class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//公共继承
class Son1 :public Base1 {
public:
	void func() {
		m_A;
		m_B;
		
	}
	int m_D;
};

void myClass() {
	Son1 s1;
	s1.m_A;
}

//保护继承
class Son2 : protected Base1 {
public:
	void func() {
		m_A; //类内可访问
		m_B; //类内可访问
	}
};

void myClass2() {
	Son2 s2;
	//s2.m_A; //类外不可访问
	//s2.m_B; //类外不可访问
}

//私有继承
class Son3 : private Base1 {
public:
	void func() {
		m_A;
		m_B;
	}
};

void test01() {
	cout << "sizeof son = " << sizeof(Son1) << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}