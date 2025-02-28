#include <iostream>
using namespace std;

// 引用可以做函数返回值，但不要返回局部变量的引用
//int& t1(){
//	int a = 10;
//	return a;
//}

int& t2(){
	static int a = 10; // 静态变量，存放在全局区，可以作为表达式的左值
	return a;
}
int main52(){
	int& b = t2();
	cout << b << endl;

	system("pause");
	return 0;
}