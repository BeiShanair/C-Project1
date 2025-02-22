#include <iostream>
using namespace std;

int main26() {
	// break
	int a = 0;
	cout << "input a num" << endl;
	cin >> a;
	switch(a)
	{
	case 1:
	cout << "easy" << endl;
	break;

	case 2:
	cout << "middle" << endl;
	break;

	default:
	cout << "difficult" << endl;
	break;
	}

	for (int i = 0; i < 10; i++) {
		if(i == 5) {
			break;
		}
		cout << i << endl;
	}


	system("pause");
	return 0;
}