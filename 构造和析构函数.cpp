#include<iostream>
using namespace std;

class Person {
public:
	//构造函数
	//无参构造函数
	Person() {
		//cout << "Person的构造函数调用" << endl;
		cout << "无参构造函数" << endl;
	}
	//有参构造函数
	Person(int a) {
		cout << "有参构造函数" << endl;
		age = a;
	}
	//拷贝构造函数
	Person(const Person& p) {
		cout << "拷贝构造函数" << endl;
		age = p.age;
	}

	//析构函数
	~Person() {
		cout << "Person的析构函数调用" << endl;
	}

public:
	int age;
};

//调用无参构造函数
void test01() {
	Person p;
}

//调用有参构造函数
void test02() {
	Person p(10);
}

//拷贝构造函数的调用
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test03() {
	Person man(20); //man对象已经创建完毕
	Person newman(man); //调用拷贝构造函数
	Person newman2 = man; //拷贝构造

}



int main() {

	test01();
	test02();
	test03();

	system("pause");
	return 0;
}