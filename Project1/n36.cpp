#include <iostream>
using namespace std;

// 函数定义需要在调用之前（各种意义上的前面）定义，与Java有一定区别，类似于python
int add(int a,int b){
	int sum = a + b;
	return sum;
}
// 函数定义可分有参有返、有参无返、无参有返和无参无返
int main36() {
	int num1 = 5;
	int num2 = 10;
	int s = add(num1,num2);
	cout << "a + b = " << s << endl;

	system("pause");
	return 0;
}