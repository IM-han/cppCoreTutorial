#include<iostream>
using namespace std;

//全局变量
int ga = 10;
int gb = 20;

//全局常量
const int cga = 10;
const int cgb = 20;

int main() {
	//局部变量
	int a = 10;
	int b = 10;

	//打印地址
	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量ga的地址为：" << (int)&ga << endl;
	cout << "全局变量gb的地址为：" << (int)&gb << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 20;

	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;

	cout << "全局常量cga的地址为：" << (int)&cga << endl;
	cout << "全局常量cgb的地址为：" << (int)&cgb << endl;

	cout << "字符串常量1地址为" << (int)&"hello" << endl;
	cout << "字符串常量2的地址为：" << (int)&"world" << endl;

	//局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (int)&c_l_b << endl;



	system("pause");
	return 0;
}