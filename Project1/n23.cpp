﻿#include <iostream>
using namespace std;

int main23() {
	// 拍桌子游戏
	for(int i = 1; i <= 100; i++) {
		if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "敲桌子！" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}