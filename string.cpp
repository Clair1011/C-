#include <iostream>
#include <string>
using namespace std;

int main(){
	// append 
	string greet = "Hello ";
	string name = "Hank";
	cout << greet.append(name) << endl;
	
	// replace
	string myString = "this is a test";
	cout << myString << endl;
	myString.replace(10,13,"fun C++ program"); //�q10�}�l������13 
	cout << myString << endl;
	
	// find 
	string fruit = "pineapple";
	cout << fruit.find("apple",0) << endl; //�q0�}�l�M��apple���r��_�l��
	// substr �^���n���r�� 
	string str_2 = fruit.substr(4,8);  //�q��m4�}�l�^����8���� 
	cout << fruit << endl;
	cout << str_2 << endl; 
	
	return 0;
} 
