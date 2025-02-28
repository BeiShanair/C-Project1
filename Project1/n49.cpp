#include <iostream>
#include <vector>
using namespace std;

struct people{
	string name;
	int age;
	string job;
};
// 动态数组vector<>
vector<people> s(vector<people> p){
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5 - 1 - i;j++){
			if(p[j].age > p[j+1].age){
				people temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	
	return p;
}

int main49(){
	vector<people> arr = {
		{"A",50,"worker"},
		{"B",45,"teacher"},
		{"C",20,"student"},
		{"D",30,"pilot"},
		{"E",35,"driver"}
	};

	vector<people> arr2 = s(arr);

	for(int i = 0;i < 5;i++){
		cout << arr2[i].name << " " << arr2[i].age << " " << arr2[i].job << endl;
	}

	system("pause");
	return 0;
}