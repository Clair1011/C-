#include <iostream>

using namespace std;

int main(){
	/* �ꭱ�n�p�� 
	const float pi = 3.14;
	int r, area;
	cout << "��J�b�|: " ;
	cin >> r;
	area = r * r * pi;
	cout << "�ꭱ�n��: " <<area << endl; */
	
	// �����P�x���ײv�p�� 
	const float rate = 30.8;
	float TWD, USD;
	cout << "��J�x�����B: ";
	cin >> TWD;
	USD = TWD/rate;
	cout << "�I��������: " << USD << "��" << endl; 
	return 0; 
}
