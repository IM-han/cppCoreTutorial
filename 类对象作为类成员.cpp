#include<iostream>
using namespace std;

class Phone {
public:
	string m_PhoneName; //����

	Phone(string name) {
		m_PhoneName = name;
		cout << "Phone���캯��" << endl;
	}

	~Phone() {
		cout << "Phone��������" << endl;
	}
};

class Person {
public:
	string m_Name;
	Phone m_Phone;

	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person���캯��" << endl;
	}

	~Person() {
		cout << "Person��������" << endl;
	}

	void playGame() {
		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�" << endl;
	}
};

void test01() {

	Person p("����", "IPhone");
	p.playGame();
}

int main() {

	test01();

	system("pause");
	return 0;
}