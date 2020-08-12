#include<iostream>
using namespace std;

class Animal {
public:
	Animal() {
		cout << "Animal ���캯������" << endl;
	}

	virtual void speak() = 0;

	virtual ~Animal() {
		cout << "Animal ��������������" << endl;
	}
};

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat ���캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak() {
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat() {
		cout << "Cat������������" << endl;
		if (this->m_Name != NULL) {
			delete m_Name;
			m_Name = NULL;
		}
	}

public:
	string* m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal;
}

int main() {
	test01();

	system("pause");
	return 0;
}