#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//�P�_�T����
void triangle(int side_1, int side_2, int side_3){
	vector<int>side;
	side.push_back(side_1);
	side.push_back(side_2);
	side.push_back(side_3);
	sort(side.begin(), side.end());
	int greatest = side[2];
	if(greatest < side[0] + side[1]){
		cout << "�i�H�Φ��T����" << endl;
		return;
	}
	else{
		cout << "����Φ��T����" << endl;
		return; 
	}
	}

int main(){
	int side1, side2, side3;
	cout<< "�п�J�T��";
	cin >> side1 >> side2 >> side3;
	triangle(side1, side2, side3);
	return 0;
}
