#include <iostream>

using namespace std;

int main(){
	float height, weight, BMI;
	flag:
	cout << "請輸入身高體重: " << endl;
	cin >> height >> weight;
	if(height <=0 || weight <=0){
		cout << "輸入有誤" << endl;
		goto flag; 
	}
	else{
	height = height / 100;
	BMI = weight / (height * height);
	cout << "BMI值為: " << BMI << endl;
	}
}
