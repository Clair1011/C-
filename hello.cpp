#include <iostream>

using namespace std;

int main(){
	//cout << "hello" << endl << "world"; // 印完hello接這印world, endl = end of line 換行的意思(\n)
	int age;
	cout << "How old are you?";
	cin >> age;
	cout << "I am " << age << " years old";
	 
	system("pause"); // 還給OS前系統暫停 
	return 0;  // 結束後還給OS 
}

