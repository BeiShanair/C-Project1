#include <iostream>
using namespace std;

int main5() {
	// 单精度浮点型，7位有效数字
	float a = 3.14f;
	cout << a << "这是单精度浮点型" << endl;

	// 双精度浮点型，15位有效数字
	// 但是在输出时，默认输出6位有效数字
	double b = 3.1415926;
	cout << b << "这是双精度浮点型" << endl;

	// 科学计数法
	float f = 3e2;
	float f2 = 3e-2;
	cout << f << endl;
	cout << f2 << endl;


	system("pause");
	return 0;
}