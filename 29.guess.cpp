#include<iostream>
using namespace std;

int main()
{
	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool outofGuess = false;
	
	while(secretNum != guess && !outofGuess){
		if(guessCount<guessLimit){
			cout<<"Enter guess: "<<endl;
			cin>>guess;
			guessCount++;
		}else{
			outofGuess = true;
		}
	}
	if(outofGuess){
		cout<<"Opps You Lose!"<<endl;
	}else{
		cout<<"Congratulations You Win!!!"<<endl;
	}
	return 0;
}
