#include<iostream>
using namespace std;

//�޲���
void func() {
	cout << "func�ĵ���" << endl;
}
//���Ͳ���
void func(int a) {
	cout << "func(int a )�ĵ���" << endl;
}
//˫�������
void func(double a) {
	cout << "func(double a )�ĵ���" << endl;
}
//һ�����ͣ�һ��˫�����Ͳ���
void func(int a, double b) {
	cout << "func(int a, double b)�ĵ���" << endl;
}
//һ��˫���㣬һ�����Ͳ���
void func(double b, int a) {
	cout << "func(double b, int a)�ĵ���" << endl;
}
//���ò���
void func(int& a) {
	cout << "func(int& a)�ĵ���" << endl;
}
//�������ò���
//void func(const int& a) {
//	cout << "func(const int& a)�ĵ���" << endl;
//}


int main() {
	func();
	func(10);
	func(3.14);
	func(10, 3.14);
	func(3.14, 10);

	system("pause");
	return 0;
}