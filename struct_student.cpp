#include <iostream>
#include<string>
using namespace std;

int main(){
	struct student{
		string name;
		int grade;
	};
	student Data[5];
	
	for(int i = 0; i < 5; i++){
		cout << "�ǥ�" << i+1 << "�m�W: ";
		cin >> Data[i].name;
		cout << "�ǥ�" << i+1 << "���Z: ";
		cin >> Data[i].grade; 
	}
	cout << "���ή檺�P��" << endl; 
	for(int i = 0; i < 5; i++){
		if(Data[i].grade < 60){
			cout << Data[i].name << endl;
		}
	}
	return 0;
}
