#include <iostream>
using namespace std;

int main18(){

	srand((unsigned int)time(NULL));

	int a = rand()%100;
	int b = 0;

	cout << "input a num (0 ~ 99)" << endl;
	cin >> b;
	
	while(a != b)
	{
		if(a > b)
		{
			cout << "Too Small" << endl;
			cout << "input a num (0 ~ 99)" << endl;
			cin >> b;
		} else
		{
			cout << "Too Big" << endl;
			cout << "input a num (0 ~ 99)" << endl;
			cin >> b;
		}
	}
	cout << "Correct!" << endl;

	system("pause");
	return 0;
}