#include <iostream>

using namespace std;

int main(){
	char choice;
	int cost = 0;
	do{
		cout << "想吃點什麼呢? \n a.鮭魚壽司($100) \n b.鰻魚壽司($200) \n c.鮪魚刺身($500) \n d.沙拉($80) \n e.清酒($200)\n";
		cout << "f.結帳" << endl;
		cin >> choice;
		switch(choice){
			case 'a':
				cost += 100;
				cout << "鮭魚壽司現點現做，請稍等喔~" << endl;
				break;
			case 'b':
				cost += 200;
				cout << "鰻魚壽司現點現做，請稍等喔~" << endl;
				break;
			case 'c':
				cost += 500;
				cout << "鮪魚刺身現點現做，請稍等喔~" << endl;
				break;
			case 'd':
				cost += 80;
				cout << "沙拉現點現做，請稍等喔~" << endl;
				break;
			case 'e':
				cost += 200;
				cout << "開車不喝酒唷~ " << endl;
				break; 
			case 'f':
				cout << "我要結帳~" <<endl;
				break;
			default:
				cout << "輸入有誤" << endl;
				break;
		}
	}
	while(choice != 'f');
		cout << "消費金額: " << cost << "元" << endl;
return 0;
}
