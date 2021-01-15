#include <iostream>

using namespace std;

int main(){
	int age;
	char edu;
	
	cout << "請問年齡幾歲? ";
	cin >> age;
	cout << "是否還在就學中(T/F)";
	cin >> edu;
	if (age < 19) {
		cout << "目前不用當兵" << endl;
	}
	else if (edu == 'T'){
		cout << "目前還不用當兵" << endl; 
	}
} 
