#include<iostream>
using namespace std;

class Person {
public:
	static int m_A; //��̬��Ա����

private:
	static int m_B; //˽�о�̬��Ա����
};

int Person::m_A = 10;
int Person::m_B = 20;

void test01() {

	//��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.m_A = 100;

	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p2.m_A = " << p2.m_A << endl;

	//2��ͨ������
	cout << "p1.m_A = " << Person::m_A << endl;
	

}


int main() {
	test01();


	system("pause");
	return 0;
}