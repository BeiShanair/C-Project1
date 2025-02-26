#include <iostream>
using namespace std;

int main38() {
	// 指针，可以通过指针间接访问内存，用于记录内存地址
	int a = 10;
	// 定义指针
	int *p = &a;
	// 输出变量a的内存地址
	cout << p << endl;

	// 解引用，对a重新赋值
	*p = 20;
	cout << a << endl;

	// 不论何种类型的指针，其所占内存空间均为4字节（32位）或8字节（64位）
	cout << sizeof(p) << endl;
	system("pause");
	return 0;
}