#include <iostream>
using namespace std;

int main39() {
	// 空指针，空指针的内存地址为0
	// 0~255为系统占用内存地址，不可访问
	int *p = NULL;

	// 野指针，指向非法内存地址
	int *pa = (int *) 0x0022;
	cout << *pa << endl;

	system("pause");
	return 0;
}