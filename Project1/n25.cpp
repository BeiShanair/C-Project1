﻿#include <iostream>
using namespace std;

int main25() {
	// 乘法口诀表
	for(int i = 1; i < 10; i++) {
		for(int j = 1; j <= i; j++) {
			cout << j << " * " << i << " = " << i * j << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}