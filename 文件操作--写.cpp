#include<iostream>
#include<fstream>
using namespace std;

void test01() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);

	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	ofs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}