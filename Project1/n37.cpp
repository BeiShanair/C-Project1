#include <iostream>
#include "swap.h" //引号可让程序优先寻找本地目录的头文件
using namespace std;

// 函数分文件编写
// 1、创建.h的头文件
// 2、创建.cpp的源文件
// 3、头文件声明函数
// 4、源文件函数定义
int main37(){
	int num1 = 5;
	int num2 = 20;
	cout << num1 << endl;
	cout << num2 << endl;
	swap(num1,num2);

	system("pause");
	return 0;
}