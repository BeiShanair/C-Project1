#include <iostream>
using namespace std;

int main12(){
	// 前置递增，先变量+1，再进行运算
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	// 后置递增，先运算，再变量+1
	int b = 100;
	b++;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}