#include<iostream>
using namespace std;

//1�����һ��Բ�࣬��Բ���ܳ�

const double PI = 3.14;

class Circle {
public: //����Ȩ��
	//����
	int m_r; //�뾶

	//��Ϊ
	//����Բ���ܳ�
	double calculateZC() {
		return 2 * PI * m_r;
	}
};


//2�����һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student {
//����
public:
	string m_name;
	int m_id;

//��Ϊ

public:
	//����������ѧ��
	void setName(string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}
	//��ʾ������ѧ��
	void showStudent() {
		cout << "Name: " << m_name << " ID: " << m_id << endl;
	}
};


//3��Ȩ��
//����Ȩ�� public
//����Ȩ�� protected
//˽��Ȩ�� private

class Person {
//����
public:
	string m_Name;//����Ȩ��
protected:
	string m_Car; //����Ȩ��
private:
	int m_password; //˽��Ȩ��
//��Ϊ
public:
	void func() {
		m_Name = "������";
		m_Car = "benz";
		m_password = 1234;
	}
};


//4�������������
class Cube {
//��������
public:
	int m_H;
	int m_W;
	int m_L;

//������Ϊ
public:

	//�����
	int getArea() {
		return (m_L * m_W + m_L * m_H + m_H * m_W) * 2 ;
	}
	//�����
	int getVolume() {
		return m_L * m_W * m_H;
	}
};

int main() {
	//ͨ��Բ�࣬����Բ�Ķ���
	Circle c1; //ʵ����
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;


	//ͨ��ѧ���࣬����ѧ������
	Student s1;
	s1.setName("hello");
	s1.setID(20);

	s1.showStudent();

	//Ȩ����
	Person p;
	p.func();
	cout << p.m_Name << endl;
	p.m_Name = "hh";
	cout << p.m_Name << endl;

	//��������
	Cube v1;
	v1.m_L = 2;
	v1.m_W = 3;
	v1.m_H = 4;
	int v_a = v1.getArea();
	cout << "�����������" << v_a << endl;
	int v_v = v1.getVolume();
	cout << "�����������" << v_v << endl;
	

	system("pause");
	return 0;
}