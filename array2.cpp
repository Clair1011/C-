#include <iostream>

using namespace std;

int main(){
	int i, j; // i �~�ȭ��N���Aj ���u 
	int sale[2][4]; // �s�~�ȭ��Ωu 
	
	for(i = 0; i <2; i++){
		for(j = 0; j < 4; j++){
			cout << "�~�ȭ�" << i+1 << "�b��" << j+1 << "�u���P��~�Z";
			cin >> sale[i][j]; 
		}
	}
	int total;
	for(i = 0; i<2; i++){
		cout << "�~�ȭ�" << i+1 << endl;
		for(j = 0; j < 4; j++){
			cout << "��" << j+1 << "�u���P��~�Z: " << sale[i][j] <<"\t";
			total += sale[i][j];
		} 
		cout << endl;
		
	}
	cout << "�`�P��~�Z: " << total << endl;
	return 0;
}
