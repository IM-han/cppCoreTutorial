#include<iostream>
using namespace std;

//ȫ�ֱ���
int ga = 10;
int gb = 20;

//ȫ�ֳ���
const int cga = 10;
const int cgb = 20;

int main() {
	//�ֲ�����
	int a = 10;
	int b = 10;

	//��ӡ��ַ
	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;

	cout << "ȫ�ֱ���ga�ĵ�ַΪ��" << (int)&ga << endl;
	cout << "ȫ�ֱ���gb�ĵ�ַΪ��" << (int)&gb << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 20;

	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;

	cout << "ȫ�ֳ���cga�ĵ�ַΪ��" << (int)&cga << endl;
	cout << "ȫ�ֳ���cgb�ĵ�ַΪ��" << (int)&cgb << endl;

	cout << "�ַ�������1��ַΪ" << (int)&"hello" << endl;
	cout << "�ַ�������2�ĵ�ַΪ��" << (int)&"world" << endl;

	//�ֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;



	system("pause");
	return 0;
}