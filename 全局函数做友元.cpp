#include<iostream>
using namespace std;

class Building {
public:
	string m_SittingRoom = "客厅";
private:
	string m_BedRoom = "卧室";

	friend void goodGay(Building* building);
public:
	Building() {
		this->m_BedRoom = "卧室";
		this->m_SittingRoom = "客厅";
	}
};


void goodGay(Building* building) {

	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
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