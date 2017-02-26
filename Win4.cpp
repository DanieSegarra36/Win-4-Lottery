#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	system("clear");
	srand(time(0));
	
	int choice, choice2;
	int win4[4];
	int winningNums[4];
	
//Prompt	
	cout << "You are playing the Win-4 Lottery!\n\n";
	
	cout << "Do you wish to be given random numbers? - [1]\n";
	cout << "\t\tor\nDo you wish to choose your own numbers? - [2]\n";
	cout << "\n**Any other input to escape**\n";
	cout << "\nChoice: ";
	cin >> choice;


	switch(choice){
	
		case 1:
			cout << endl;
			cout << "Your numbers are: ";
	
			for(int i=0; i<4; i++){
				win4[i] = rand()%10;
				cout << win4[i];
				if (i<3){
					cout << ", ";
				}
			}
			break;
		case 2:
			cout << endl;
			cout << "Pick four numbers between 0 and 9\n";
			for(int i=0; i<4; i++){
				cout << "Choose a number: ";
				cin >> choice2;
				while(choice2>9 || choice2<0){
					cout << "Try again: ";
					cin >> choice2;
				}
				win4[i] = choice2;
			}
			cout << endl;
			cout << "Your numbers are: ";
	
			for(int i=0; i<4; i++){
				cout << win4[i];
				if (i<3){
					cout << ", ";
				}
			}
			cout << endl;
			break;
		default:
			cout << "Have a nice day!\n";
			return 0;
	}
	
	cout << endl;
	
	cout << "The winning numbers are: ";
	for(int i=0; i<4; i++){
		winningNums[i] = rand()%10;
		cout << winningNums[i];
		if (i<3){
			cout << ", ";
		}
	}
	cout << endl;
	
	bool arrayResult = true;

	for(int i = 0; i<4 && arrayResult==true; i++){
		if(win4[i]==winningNums[i]){
			arrayResult=true;
		}else{
			cout << "Sorry, you lost.\n";
			arrayResult=false;
		}
	}
	
	if (arrayResult==true){
		cout << "You Won!!\n";
	}
}