#include <iostream>
using namespace std;

int main34() {
	// 二维数组 直接定义
	int arr[2][3] = {{1,2,3},{4,5,6}};

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cout << arr[i][j] << " ";
		}
	}
	cout << endl;
	// 可直接写数据内容，程序会帮助切分
	int arr1[2][3] = {1,2,3,4,5,6};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cout << arr1[i][j] << " ";
		}
	}
	cout << endl;

	// 二维数组在定义时，可省略行数，但不能省略列数
	int arr2[][3] = {1,2,3,4,5,6};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			cout << arr2[i][j] << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}