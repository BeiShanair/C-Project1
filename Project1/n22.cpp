#include <iostream>
using namespace std;

int main22(){

	int a = 10;
	int b = 20;
	int c = 30;

	c = a > b ? a : b;
	cout << c << endl;

	// 给b赋值为100
	(a > b ? a : b) = 100;
	cout << b << endl;

	system("pause");
	return 0;
}