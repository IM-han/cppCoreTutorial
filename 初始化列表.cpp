#include<iostream>
using namespace std;

//初始化列表，可以初始化多个属性
class Person {
	//属性
private:
	int m_A;
	int m_B;
	int m_C;

public:
	//构造函数
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
