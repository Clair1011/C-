#include <iostream>

using namespace std;

int main(){
	char choice;
	int cost = 0;
	do{
		cout << "�Q�Y�I����O? \n a.�D���إq($100) \n b.�����إq($200) \n c.�C���먭($500) \n d.�F��($80) \n e.�M�s($200)\n";
		cout << "f.���b" << endl;
		cin >> choice;
		switch(choice){
			case 'a':
				cost += 100;
				cout << "�D���إq�{�I�{���A�еy����~" << endl;
				break;
			case 'b':
				cost += 200;
				cout << "�����إq�{�I�{���A�еy����~" << endl;
				break;
			case 'c':
				cost += 500;
				cout << "�C���먭�{�I�{���A�еy����~" << endl;
				break;
			case 'd':
				cost += 80;
				cout << "�F�Բ{�I�{���A�еy����~" << endl;
				break;
			case 'e':
				cost += 200;
				cout << "�}�����ܰs��~ " << endl;
				break; 
			case 'f':
				cout << "�ڭn���b~" <<endl;
				break;
			default:
				cout << "��J���~" << endl;
				break;
		}
	}
	while(choice != 'f');
		cout << "���O���B: " << cost << "��" << endl;
return 0;
}
