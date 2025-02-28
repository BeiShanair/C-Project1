#include <iostream>
using namespace std;

struct student{
	string name;
	int age;
	int score;
};

int main44(){
	student s1 = {"xiaoming",21,100};

	// 结构体指针
	student *p = &s1;

	cout << p->name << endl;
	cout << p->age << endl;
	cout << p->score << endl;

	system("pause");
	return 0;
}