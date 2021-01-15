#include <iostream>

using namespace std;

int abs(int num){
	if(num >= 0){
		return num;
	}
	else{
		return -1*num;
	}
}

int main(){
	int myNumber;
	cin >> myNumber;
	cout << abs(myNumber);
	return 0;
}
