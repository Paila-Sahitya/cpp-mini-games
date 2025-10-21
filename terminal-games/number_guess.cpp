#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));

    char playAgain;
    do{
        int number=rand()%100+1;
        int attempts=0;
        int guess=0;

        cout<<"\n🎯 Welcome to Number Guessing Game!"<<endl;
        cout<<"Guess the number between 1 and 100!"<<endl;
    
        while(guess!=number){
            cout<<"Enter your guess: ";
            cin>>guess;
            attempts++;

            if(guess>number){
                cout<<"Too high! Try again."<<endl;
            }
            else if(guess<number){
                cout<<"Too low! Try again."<<endl;
            }
            else{
                cout<<"🎉 Correct! You guessed it in "<<attempts<<" attempts."<<endl;
            }
        }

        cout<<"\nPlay Again? (y/n): ";
        cin>>playAgain;

    } while(playAgain=='y' || playAgain=='Y');

    cout<<"Thanks for playing!"<<endl;

    return 0;
}