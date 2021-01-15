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
	myString.replace(10,13,"fun C++ program"); //從10開始替換到13 
	cout << myString << endl;
	
	// find 
	string fruit = "pineapple";
	cout << fruit.find("apple",0) << endl; //從0開始尋找apple的字串起始值
	// substr 擷取要的字串 
	string str_2 = fruit.substr(4,8);  //從位置4開始擷取到8結束 
	cout << fruit << endl;
	cout << str_2 << endl; 
	
	return 0;
} 
