#include <iostream>
using namespace std;

// 结构体定义，自定义数据类型
struct Student
{
	// 成员列表
	string name;
	int age;
	float score;
}s3; // 创建结构体时顺便创建一个变量

int main42(){
	// 创建具体变量，可以不带struct
	Student s1;
	s1.name = "xiaomin";
	s1.age = 20;
	s1.score = 100;

	cout << s1.name << " ";
	cout << s1.age << " ";
	cout << s1.score << endl;

	// 第二种方法
	Student s2 = {"xiaohong",21,100};

	cout << s2.name << " ";
	cout << s2.age << " ";
	cout << s2.score << endl;
	
	s3.name = "wangwu";
	s3.age = 23;
	s3.score = 98;

	cout << s3.name << " ";
	cout << s3.age << " ";
	cout << s3.score << endl;
	system("pause");
	return 0;
}