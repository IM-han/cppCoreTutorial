#include<iostream>
using namespace std;

//1、设计一个圆类，求圆的周长

const double PI = 3.14;

class Circle {
public: //公共权限
	//属性
	int m_r; //半径

	//行为
	//计算圆的周长
	double calculateZC() {
		return 2 * PI * m_r;
	}
};


//2、设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student {
//属性
public:
	string m_name;
	int m_id;

//行为

public:
	//设置姓名和学号
	void setName(string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}
	//显示姓名和学号
	void showStudent() {
		cout << "Name: " << m_name << " ID: " << m_id << endl;
	}
};


//3、权限
//公共权限 public
//保护权限 protected
//私有权限 private

class Person {
//属性
public:
	string m_Name;//公共权限
protected:
	string m_Car; //保护权限
private:
	int m_password; //私有权限
//行为
public:
	void func() {
		m_Name = "张萨阿";
		m_Car = "benz";
		m_password = 1234;
	}
};


//4、设计立方体类
class Cube {
//设置属性
public:
	int m_H;
	int m_W;
	int m_L;

//设置行为
public:

	//求面积
	int getArea() {
		return (m_L * m_W + m_L * m_H + m_H * m_W) * 2 ;
	}
	//求体积
	int getVolume() {
		return m_L * m_W * m_H;
	}
};

int main() {
	//通过圆类，创建圆的对象
	Circle c1; //实例化
	c1.m_r = 10;
	cout << "圆的周长为：" << c1.calculateZC() << endl;


	//通过学生类，创建学生对象
	Student s1;
	s1.setName("hello");
	s1.setID(20);

	s1.showStudent();

	//权限类
	Person p;
	p.func();
	cout << p.m_Name << endl;
	p.m_Name = "hh";
	cout << p.m_Name << endl;

	//立方体类
	Cube v1;
	v1.m_L = 2;
	v1.m_W = 3;
	v1.m_H = 4;
	int v_a = v1.getArea();
	cout << "立方体面积：" << v_a << endl;
	int v_v = v1.getVolume();
	cout << "立方体体积：" << v_v << endl;
	

	system("pause");
	return 0;
}