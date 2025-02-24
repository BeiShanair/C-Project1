#include <iostream>
using namespace std;

int main33() {
	// 冒泡排序
	int a[10] = {4,2,5,1,0,7,9,8,3,6};
	for(int i = 0; i < 10; i++) {
		cout << a[i];
	}
	cout << endl;

	for(int i = 0; i < 10 - 1; i++) {

		for(int j = 0; j < 10 - 1 - i; j++) {
			int temp = a[j];

			if(temp > a[j+1])
			{
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	for(int i = 0; i < 10; i++) {
		cout << a[i];
	}
	cout << endl;

	system("pause");
	return 0;
}