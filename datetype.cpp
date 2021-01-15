#include <iostream>

using namespace std;

int main(){
	int MyInt = 100;
	double MyDouble = 3.14159;
	char Mychar = 'a';
	cout << sizeof(MyInt) << endl;  //sizeof(宣告的資料) 回傳資料型別的 byte 
	cout << MyDouble << endl;
	cout << Mychar <<endl;
	return 0;
}
