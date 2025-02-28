#include <iostream>
using namespace std;

struct student{
	string name;
	int age;
	int score;
};

// const修饰变量，防止误操作，尤其是利用指针传递时（地址传递）
void printInfo(const student *s){
	// s->score = 150; 不可执行
	cout << "name: " << s->name
		<< " age: " << s->age
		<< " score: " << s->score << endl;
}
int main47(){
	student s1 = {"xiaoming",21,100};

	printInfo(&s1);

	system("pause");
	return 0;
}