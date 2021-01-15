#include <iostream>

using namespace std;

int main(){
	
	int my_num = 50; 
	int guess;
	int max_num = 100;
	int min_num = 0; 
	int time = 0;
	
	while(1){
		cout << "請猜一個" << min_num << " 到 " << max_num << "之間的數" ;
		cin >> guess;
		time++;
		if (guess == my_num){
			cout << "恭喜答對~" << "一共猜了: " << time << " 次 ";
			break;
		}
		else if(guess >= my_num && guess <= max_num){
			max_num = guess;
		}
		else if(guess <= my_num && guess >= min_num){
			min_num = guess;
		}
		else{
			cout << "別鬧了" << endl; 
		}
	}
return 0;
}
