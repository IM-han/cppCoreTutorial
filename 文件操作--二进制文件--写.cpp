#include<fstream>
#include<string>
using namespace std;

class Person {
public:
	char m_Name[64];
	int m_Age;
};

//�������ļ�  д�ļ�
void test01(){
	//1������ͷ�ļ�
	//2���������������
	ofstream ofs("person.txt", ios::out | ios::binary);
	//3�����ļ�
	/*ofstream ofs;
	ofs.open("person2.txt", ios::out | ios::binary);*/

	Person p = { "����", 18 };

	//4��д�ļ�
	ofs.write((const char*)&p, sizeof(p));

	//5���ر��ļ�
	ofs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}