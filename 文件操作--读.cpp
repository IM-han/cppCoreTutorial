#include<fstream>
#include<iostream>
#include<string>
using namespace std;

void test01() {

	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//��ȡ�ļ���ʽ
	//��һ�ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//	//cout << sizeof(buf) << endl;
	//}

	//�ڶ��ַ�ʽ
	//string buf;
	/*while (getline(ifs, buf)) {
		cout << buf << endl;
	}*/

	//�����ַ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}*/

	//�����ַ�ʽ
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}


	ifs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}
