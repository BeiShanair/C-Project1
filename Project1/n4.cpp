#include <iostream>
using namespace std;

int main4(){
	// sizeof关键字，可以计算数据类型所占内存空间的大小

	cout << "int所占内存空间为：" << sizeof(int) << endl;
    cout << "short所占内存空间为：" << sizeof(short) << endl;
    cout << "long所占内存空间为：" << sizeof(long) << endl;
    cout << "long long所占内存空间为：" << sizeof(long long) << endl;

	system("pause");
	return 0;
}