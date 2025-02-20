#include <iostream>
using namespace std;

int main11(){
	int a = 2;
	int b = 21;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a / b = " << (float)a / (float)b << endl; // 整数相除还是整数，除数非零
	cout << "a * b = " << a * b << endl;

	cout << "a % b = " << a % b << endl;
	system("pause");
	return 0;
}