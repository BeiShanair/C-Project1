#include <iostream>
using namespace std;

// 定义常量
#define Day 7

int main2() {
	cout << "A week has " << Day << " days" << endl;

	// 用const修饰变量，使其成为常量
	const int month = 12;
    cout << "A year has " << month << " months" << endl;

	system("pause");
  	return 0;
}