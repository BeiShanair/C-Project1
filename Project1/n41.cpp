#include <iostream>
using namespace std;

void s(int *b, int l){
	for(int i = 0; i < l - 1; i++){
		for(int j = 0; j < l - i - 1; j++){
			if(b[j] > b[j+1])
			{
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}

	for(int i = 0; i < l; i++){
		cout << b[i] << " ";
	}
	cout << endl;
}
int main41() {
	int a[] = {2,3,6,7,1,9,8,5,4,0};
	int len = sizeof(a) / sizeof(a[0]);
	cout << len << endl;

	// 指针指向数组首地址
	int *p = a; // 等价于int *p = &a[0];
	cout << p << endl;

	s(p, len);
	system("pause");
	return 0;
}