#include<iostream>
using namespace std;

//��ʼ���б����Գ�ʼ���������
class Person {
	//����
private:
	int m_A;
	int m_B;
	int m_C;

public:
	//���캯��
	Person(int a, int b, int c):m_A(a), m_B(b), m_C(c){}

	void printPerson() {
		cout << "mA:" << m_A << endl;
		cout << "mB:" << m_B << endl;
		cout << "mC:" << m_C << endl;
	}
};


int main() {

	Person p(1, 2, 3);
	p.printPerson();

	system("pause");
	return 0;
}
