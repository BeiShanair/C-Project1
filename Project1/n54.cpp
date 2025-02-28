#include <iostream>
using namespace std;

// 函数的默认参数，指定参数的形参必须放在形参后面
int add(int a,int b = 10,int c = 20){
	return a + b + c;
}
int main54(){
	cout << add(10) << endl;

	cout << add(20,10,50) << endl;

	system("pause");
	return 0;
}