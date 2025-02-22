#include <iostream>
using namespace std;

int main20(){
	int num = 100;

	while(num < 1000)
	{
		int a = num /100;
		int b = num / 10 % 10;
		int c = num % 10;

		if((a*a*a + b*b*b + c*c*c) == num)
		{
			cout << num << endl;
		}
		num++;
	}

	system("pause");
	return 0;
}