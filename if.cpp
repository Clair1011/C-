#include <iostream>

using namespace std;

int main(){
	int age;
	char edu;
	
	cout << "�аݦ~�ִX��? ";
	cin >> age;
	cout << "�O�_�٦b�N�Ǥ�(T/F)";
	cin >> edu;
	if (age < 19) {
		cout << "�ثe���η�L" << endl;
	}
	else if (edu == 'T'){
		cout << "�ثe�٤��η�L" << endl; 
	}
} 
