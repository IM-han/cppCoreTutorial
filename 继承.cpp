#include<iostream>
using namespace std;

//class Java {
//
//public:
//	void header() {
//		cout << "��ҳ�������Ρ���¼��ע�ᡣ����������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������ġ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//	void left() {
//		cout << "Java, Python, C++...�����������б�" << endl;
//	}
//	void content() {
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ����������

class BasePage {
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(���������б�)" << endl;
	}
};

//Javaҳ��
class Java : public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python : public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

//CPPҳ��
class CPP : public BasePage {
public:
	void content() {
		cout << "CPPѧ����Ƶ" << endl;
	}
};

void test01() {
	//Java
	cout << "Java������Ƶҳ������" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "-------------------" << endl;

	//Python
	cout << "Python������Ƶҳ������" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "-------------------" << endl;

	//CPP
	cout << "CPP������Ƶҳ������" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main() {
	test01();

	system("pause");
	return 0;
}