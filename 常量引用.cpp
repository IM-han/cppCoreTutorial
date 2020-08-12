#include<iostream>
using namespace std;

int main() {

	// int& ref = 10; 报错，引用必须初始化，且合法，10不合法，一般是个变量
	//加入const就可以了，
	const int& ref = 10;//内部实现逻辑：int temp = 10; const int& ref = temp;
	cout << ref << endl;


	system("pause");
	return 0;
}