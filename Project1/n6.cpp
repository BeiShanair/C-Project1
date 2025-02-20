#include <iostream>
using namespace std;

int main6() {
	// 字符型，注意单引号，且单引号内只能有一个字符
	char a = 'a';
	cout << "这是字符型" << a << endl;
	cout << (int)a << endl;
	cout << "字符型变量大小" << sizeof(a) << endl;
	system("pause");
    return 0;
}