#include<iostream>
using namespace std;

class Person {
public:
	int age;

	Person(int age) {
		//1、当形参和成员变量同名时，可用this指针来区分
		this->age = age;
	}

	Person& PersonAddPerson(Person p) {
		this->age += p.age;
		//返回对象本事
		return *this;
	}

};

void test01() {
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(20);
	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
	cout << "p2.age = " << p2.age << endl;
}

int main() {

	test01();

	system("pause");
	return 0;
}