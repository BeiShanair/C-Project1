#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	float score;
};

int main43(){
	// 结构体数组
	Student arr[] = {
		{"xiaoming",20,100},
		{"xiaohong",21,100},
		{"zhangsan",22,98}
	};
	for(int i = 0; i < 3; i++){
		cout << arr[i].name << " ";
		cout << arr[i].age << " ";
		cout << arr[i].score << endl;
	}
	system("pause");
	return 0;
}