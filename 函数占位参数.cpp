#include<iostream>
using namespace std;


//函数占位参数，调用时必须填补该位置
void func(int a, int) {
	cout << "this is a function" << endl;

}

int main() {

	func(10, 10);


	system("pause");
	return 0;
}