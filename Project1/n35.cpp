#include <iostream>
using namespace std;

int main35() {
	
	int arr[2][3] = {1,2,3,4,5,6};
	// 二维数组所占内存空间 = 数据类型*该数据类型所占内存空间
	cout << sizeof(arr) << endl;

	// 二维数组内存地址
	cout << arr << endl;

	// 二维数组首行内存地址
	cout << arr[0] << endl;

	// 二维数组行数
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	system("pause");
	return 0;
}