#include <iostream>
using namespace std;

int main32() {
	// 数组逆置
	int a[5] = {1,3,4,5,2};

	for(int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << endl;

	int start = 0;
	int end = sizeof(a) / sizeof(a[0]) - 1;
	int temp = 0;

	while(start < end) {
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}

	for(int i = 0; i < 5; i++) {
		cout << a[i];
	}
	cout << endl;

	system("pause");
	return 0;
}