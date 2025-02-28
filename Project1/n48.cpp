#include <iostream>
using namespace std;

// 嵌套结构体
struct student{
	string name;
	int score;
};

struct teacher{
	string name;
	student s[5];
};

void al(teacher tarr[],int len){
	string nameSeed = "ABCDE";
	for(int i = 0;i < len;i++){
		tarr[i].name = "Teacher_";
		tarr[i].name += nameSeed[i];

		for(int j = 0;j < 5; j++){
			tarr[i].s[j].name = "Student_";
			tarr[i].s[j].name += nameSeed[j];

			int random = rand() % 61 + 40; // 60~100随机数
			tarr[i].s[j].score = random;
		}
	}
}

void pt(teacher tarr[],int len){
	for(int i = 0;i < len; i++){
		cout << "name: " << tarr[i].name << endl;

		for(int j = 0; j < 5; j++){
			cout << "\tname: " << tarr[i].s[j].name
				<< " score: " << tarr[i].s[j].score << endl;
		}
	}
}

int main48(){
	srand((unsigned int)time(NULL));

	teacher tarr[3];

	int len = sizeof(tarr) / sizeof(tarr[0]);

	al(tarr,len);
	pt(tarr,len);

	system("pause");
	return 0;
}