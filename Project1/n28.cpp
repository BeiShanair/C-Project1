#include <iostream>
using namespace std;

int main28() {
	// goto，无条件跳转语句
	cout << 1 << endl;

	goto FLAG;

	cout << 2 << endl;
	cout << 3 << endl;

	FLAG:
	cout << 4 << endl;


	system("pause");
	return 0;
}