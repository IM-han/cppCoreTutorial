#include<iostream>
using namespace std;

int main() {

	// int& ref = 10; �������ñ����ʼ�����ҺϷ���10���Ϸ���һ���Ǹ�����
	//����const�Ϳ����ˣ�
	const int& ref = 10;//�ڲ�ʵ���߼���int temp = 10; const int& ref = temp;
	cout << ref << endl;


	system("pause");
	return 0;
}