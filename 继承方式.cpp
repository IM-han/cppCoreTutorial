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

//�����̳�
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

//�����̳�
class Son2 : protected Base1 {
public:
	void func() {
		m_A; //���ڿɷ���
		m_B; //���ڿɷ���
	}
};

void myClass2() {
	Son2 s2;
	//s2.m_A; //���ⲻ�ɷ���
	//s2.m_B; //���ⲻ�ɷ���
}

//˽�м̳�
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