#include <iostream>
using namespace std;

int main50(){
	// 引用（引用并不完全与指针等同）
	// 引用必须初始化，一旦初始化就不可更改
	int a = 10;
	int &b = a; // 初始化，int &b;为非法
	int c = 20;

	//int &b = c; 错误，不可更改
	cout << a << endl;
	cout << b << endl;

	b = 1000; // 但可以进行赋值操作
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}