#include <iostream>
using namespace std;

// 常量引用，防止误操作
void t1(const int &a){
	cout << a << endl;
}
int main53(){
	int a = 100;
	t1(a);

	system("pause");
	return 0;
}