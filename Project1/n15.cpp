#include <iostream>
using namespace std;

int main(){
	// 选择结构
	int a = 0;
	cout << "input a sorce:" << endl;
	cin >> a;

	if(a > 600) 
	{
		cout << "success" << endl;
	} 
	else
	{
		cout << "sorry" << endl;
	}

	system("pause");
	return 0;
}