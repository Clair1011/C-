#include <iostream>

using namespace std;

int main(){
	float height, weight, BMI;
	flag:
	cout << "�п�J�����魫: " << endl;
	cin >> height >> weight;
	if(height <=0 || weight <=0){
		cout << "��J���~" << endl;
		goto flag; 
	}
	else{
	height = height / 100;
	BMI = weight / (height * height);
	cout << "BMI�Ȭ�: " << BMI << endl;
	}
}
