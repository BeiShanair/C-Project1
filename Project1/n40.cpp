#include <iostream>
using namespace std;

int main40() {
	int a = 10;
	int b = 20;

	// 常量指针，指针指向可以改，指向的值不可改
	const int *p = &a;
	// *p = 20; 不可执行
	p = &b; // 可行
	cout << *p << endl;

	// 指针常量，指针指向不可改，指向的值可以改
	int *const p2 = &a;
	*p2 = 200; // 可行
	// p2 = &b;   不可行
	cout << a << endl;

	// const既修饰常量又修饰指针，均不可改
	const int *const p3 = &b;

	system("pause");
	return 0;
}