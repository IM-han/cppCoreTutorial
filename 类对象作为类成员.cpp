#include<iostream>
using namespace std;

class Phone {
public:
	string m_PhoneName; //属性

	Phone(string name) {
		m_PhoneName = name;
		cout << "Phone构造函数" << endl;
	}

	~Phone() {
		cout << "Phone析构函数" << endl;
	}
};

class Person {
public:
	string m_Name;
	Phone m_Phone;

	Person(string name, string pName) :m_Name(name), m_Phone(pName) {
		cout << "Person构造函数" << endl;
	}

	~Person() {
		cout << "Person析构函数" << endl;
	}

	void playGame() {
		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机" << endl;
	}
};

void test01() {

	Person p("张三", "IPhone");
	p.playGame();
}

int main() {

	test01();

	system("pause");
	return 0;
}