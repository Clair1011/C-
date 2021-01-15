#include <iostream>

using namespace std;

int main(){
	/* 圓面積計算 
	const float pi = 3.14;
	int r, area;
	cout << "輸入半徑: " ;
	cin >> r;
	area = r * r * pi;
	cout << "圓面積為: " <<area << endl; */
	
	// 美元與台幣匯率計算 
	const float rate = 30.8;
	float TWD, USD;
	cout << "輸入台幣金額: ";
	cin >> TWD;
	USD = TWD/rate;
	cout << "兌換美元為: " << USD << "元" << endl; 
	return 0; 
}
