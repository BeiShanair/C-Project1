#include <iostream>
using namespace std;

// 嵌套结构体
struct student{
	string name;
	int age;
	int score;
};

struct teacher{
	int id;
	string name;
	int age;
	student s;
};

int main45(){
	student s1 = {"xiaoming",21,100};
	teacher t1 = {1,"wang",50,s1};

	cout << t1.id << endl;
	cout << t1.name << endl;
	cout << t1.age << endl;
	cout << "\t" << t1.s.name << endl;
	cout << "\t" << t1.s.age << endl;
	cout << "\t" << t1.s.score << endl;

	system("pause");
	return 0;
}