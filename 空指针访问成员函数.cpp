#include<iostream>
using namespace std;

//��ָ����ʳ�Ա����
class Person {
public:
	int mAge;

public:
	void ShowClassName() {
		cout << "����Person��" << endl;
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
	//��ָ����õ��ó�Ա����
	p->ShowClassName();
	p->ShowPerson();

}

int main() {
	test01();


	system("pause");
	return 0;
}