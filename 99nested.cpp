#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i, j;
	for(i = 1; i<=9; i++)
	{
		for(j = 1; j <= 9; j++){
			cout << setw(6) << i*j ; // setw ³]©w¼e«× 
		}
		cout << endl;
	}
	
} 
