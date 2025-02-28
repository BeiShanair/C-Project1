#include <iostream>
using namespace std;

// 引用作为函数参数，也会影响实参的值，与地址传递相同
void swap1(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main51(){
	int a = 10;
	int b = 20;
	cout << a << endl;
	cout << b << endl;

	swap1(a,b);
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}