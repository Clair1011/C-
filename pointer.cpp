#include <iostream>

using namespace std;

int main(){
	int size;
	cout << "��J�}�C�j�p: ";
	cin >> size;
	int* arrPtr = new int [size]; //new �O�ʺA�t�m�O����Ŷ� 
	for(int i = 0; i < size ; i++){
		cout << "��J�}�C��" << i+1 << "�����";
		cin >> *(arrPtr + i);
	}
	for(int i = 0; i < size; i++){
		cout << *(arrPtr + i) <<endl;
	}
	delete [] arrPtr;
	return 0;
}
