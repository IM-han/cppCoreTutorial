#include<iostream>
using namespace std;

class Person {
public:
	//���캯��
	//�޲ι��캯��
	Person() {
		//cout << "Person�Ĺ��캯������" << endl;
		cout << "�޲ι��캯��" << endl;
	}
	//�вι��캯��
	Person(int a) {
		cout << "�вι��캯��" << endl;
		age = a;
	}
	//�������캯��
	Person(const Person& p) {
		cout << "�������캯��" << endl;
		age = p.age;
	}

	//��������
	~Person() {
		cout << "Person��������������" << endl;
	}

public:
	int age;
};

//�����޲ι��캯��
void test01() {
	Person p;
}

//�����вι��캯��
void test02() {
	Person p(10);
}

//�������캯���ĵ���
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03() {
	Person man(20); //man�����Ѿ��������
	Person newman(man); //���ÿ������캯��
	Person newman2 = man; //��������

}



int main() {

	test01();
	test02();
	test03();

	system("pause");
	return 0;
}