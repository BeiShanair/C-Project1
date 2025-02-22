#include <iostream>
using namespace std;

int main31() {
	int a[5] = {100,200,350,250,400};

	int m = 0;
	for(int i = 0; i < 5; i++) {
		if(a[i] > m)
		{
			m = a[i];
		}
	}
	cout << m << endl;

	system("pause");
	return 0;
}