#include <iostream>
using namespace std;

int main16(){
	// switch语句
	// 在C++中，并没有像Java12之后的增强型switch语句（即用->这种形式的）
	// 所以在C++中，每一个case语句都要给break语句
	int a = 0;
	cout << "input a num:" << endl;
	cin >> a;

	switch(a)
	{
		case 1:
			cout << "small" << endl;
			break;

		case 2:
			cout << "middle" << endl;
			break;

		case 3:
			cout << "big" << endl;
			break;

		default:
			cout << "unknow" << endl;
			break;
	}
	system("pause");
	return 0;
}