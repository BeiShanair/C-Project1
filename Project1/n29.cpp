#include <iostream>
using namespace std;

int main29() {
	// 数组
	// 存放在一块连续的内存空间中，数组中的每个元素都是相同的数据类型
	int a[5];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 3;
	a[4] = 6;

	for(int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}

	// 未完全赋值的部分将用0代替；
	int b[5] = {1,2,40};

	for(int i = 0; i < 5; i++) {
		cout << b[i] << endl;
	}

	// 定义数组之后，可以不写数组长度
	int c[] = {1,2,40};
	system("pause");
	return 0;
}