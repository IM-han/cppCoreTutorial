#include<iostream>
using namespace std;

//空指针访问成员函数
class Person {
public:
	int mAge;

public:
	void ShowClassName() {
		cout << "我是Person类" << endl;
	}

	void ShowPerson() {
		if (this == NULL) {
			return;
		}
		cout << "hhh" << endl;
	}
};

void test01() {
	Person* p = NULL;
	//空指针可用调用成员函数
	p->ShowClassName();
	p->ShowPerson();

}

int main() {
	test01();


	system("pause");
	return 0;
}