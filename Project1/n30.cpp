#include <iostream>
using namespace std;

int main30() {
	int a[] = {1,2,3,4,5};

	cout << sizeof(a) << endl;
	cout << sizeof(a[0]) << endl;

	// 输出数组内存地址
	cout << a << endl;
	// 数组首个元素内存地址
	cout << &a[0] << endl;
	system("pause");
	return 0;
}