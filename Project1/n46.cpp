#include <iostream>
using namespace std;

struct student{
	string name;
	int age;
	int score;
};

// 结构体做参数
void printInfo(student s){
	cout << "name: " << s.name
		<< " age: " << s.age
		<< " score: " << s.score << endl;
}
int main46(){
	student s1 = {"xiaoming",21,100};

	printInfo(s1);

	system("pause");
	return 0;
}