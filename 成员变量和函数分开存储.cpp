#include<iostream>
using namespace std;

class Person {

public:

	int mA; //�Ǿ�̬����ռ����ռ�
	static int mB; //��̬������ռ����ռ�
	Person() {
		mA = 100;
	}
	//������ռ����ռ䣬���к�������һ������ʵ��
	void func() {
		cout << "mA: " << this->mA << endl;
	}

	//��̬����Ҳ��ռ����ռ�
	static void sfunc() {

	}
};

int main() {

	cout << sizeof(Person) << endl;

	system("pause");
	return 0;
}