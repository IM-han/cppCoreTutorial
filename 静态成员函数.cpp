#include<iostream>
using namespace std;

class Person {
public:
	int m_B;
	static int m_A;

	static void func() {
		cout << "func���ã�" << endl;
		m_A = 100;

	}

private:
	static void func2() {
		cout << "func2����" << endl;
	}
};

//�����ʼ��
int Person::m_A = 10;

void test01() {
	//��̬��Ա�������÷�ʽ
	//1��ͨ������
	Person p1;
	p1.func();

	//2��ͨ������
	Person::func();

}

int main() {
	test01();


	system("pause");
	return 0;
}