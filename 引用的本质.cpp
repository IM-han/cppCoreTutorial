#include<iostream>
using namespace std;

//���õı�����һ��ָ�볣��

void func(int& ref) {
	ref = 100;
}

int main() {
	int a = 10;

	int& ref = a; //�����Զ�ת��Ϊint* const ref = &a, 
	ref = 20; //�Զ�ת��Ϊ *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;


	system("pause");
	return 0;

}