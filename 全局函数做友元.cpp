#include<iostream>
using namespace std;

class Building {
public:
	string m_SittingRoom = "����";
private:
	string m_BedRoom = "����";

	friend void goodGay(Building* building);
public:
	Building() {
		this->m_BedRoom = "����";
		this->m_SittingRoom = "����";
	}
};


void goodGay(Building* building) {

	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01() {
	Building b;
	goodGay(&b);
}

int main() {
	test01();


	system("pause");
	return 0;
}