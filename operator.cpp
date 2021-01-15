#include <iostream>

using namespace std;

int main(){
	//算術運算子
	/*int a = 9;
	int b = 2;
	int c = a+b; // c = 11
	int d = a-b; // d = 7
	int e = a*b; // e = 18
	int f = a/b; // f = 4
	int g = a%5; // g = 4
	c++; // c = 12 , c = c +1; c+=1;
	
	// a,b值的交換
	int temp;
	//temp = a; //temp = 9
	a = b; // a,b,temp = 2,2,9
	b = temp; // a,b,temp = 2,9,9
	
	cout << "ab交換後:" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl; 
	
	//邏輯運算子
	bool myBool = a==b || a>b; // myBool = 1
	bool myBool_2 = ! (a!=b); // myBool_2 = 0
	cout << myBool << endl;
	cout << myBool_2 <<endl; */
	
	int a = 19 % 7; // a = 5
	int b = 5 * (3 - 1) +1; // b = 11
	cout << ++a*b; //66
	return 0;
} 
