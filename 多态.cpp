#include<iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() {
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "С����˵��" << endl;
	}
};

void doSpeak(Animal& animal) {
	animal.speak();
}

void test01() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main() {

	test01();

	system("pause");
	return 0;
}