#include <iostream>
#include <string>
using namespace std;

int main(){
	struct studentData{
		string id;
		string name;
		string address;
		int age;
	};
	studentData myStudent;
	myStudent.id = "12345";
	myStudent.name = "Andy";
	myStudent.address = "оч╢щ";
	myStudent.age = 30;
	
	cout << myStudent.id << endl;
	cout << myStudent.name << endl;
	cout << myStudent.address << endl;
	cout << myStudent.age << endl; 
}
