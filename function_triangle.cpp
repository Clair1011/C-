#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//判斷三角形
void triangle(int side_1, int side_2, int side_3){
	vector<int>side;
	side.push_back(side_1);
	side.push_back(side_2);
	side.push_back(side_3);
	sort(side.begin(), side.end());
	int greatest = side[2];
	if(greatest < side[0] + side[1]){
		cout << "可以形成三角形" << endl;
		return;
	}
	else{
		cout << "不能形成三角形" << endl;
		return; 
	}
	}

int main(){
	int side1, side2, side3;
	cout<< "請輸入三邊";
	cin >> side1 >> side2 >> side3;
	triangle(side1, side2, side3);
	return 0;
}
