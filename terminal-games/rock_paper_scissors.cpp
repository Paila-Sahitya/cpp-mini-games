#include<bits/stdc++.h>
using namespace std;

//convert input to lower case and validate user's choice
bool verifyChoice(string &userChoice){
    for(char &c: userChoice){
        if(c>='A' && c<='Z'){
            c+=('a'-'A');
        }
    }
    if(userChoice=="rock" || userChoice=="paper" || userChoice=="scissors"){
        return true;
    }
    return false;
}

//generate random choice for computer
string generateComputerChoice(){
    int num=rand()%3;
    if(num == 0) return "rock";
    else if(num==1) return "paper";
    else return "scissors"; 
}

//determine winner for the round
string findWinner(string user, string comp){
    if(user==comp) return "🤝 It's a tie!";
    if((user=="rock" && comp=="scissors") || 
        (user=="paper" && comp=="rock") ||
        (user=="scissors" && comp=="paper")){
            return "🎉 You win!";
        }
    
        return "💻 Computer wins!";
}

int main(){
    srand(time(0));
    char playAgain;
    
    do{
        string userChoice, compChoice;
        
        cout<<"\n🎮 Welcome to Rock, Paper, Scissors!"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"Enter your choice (rock/paper/scissors): ";
        cin>>userChoice;

        if(!verifyChoice(userChoice)){
            cout<<"❌ Invalid choice! Please choose rock, paper, or scissors."<<endl;
            continue;
        }

        compChoice=generateComputerChoice();
        cout<<"Computer chose: "<<compChoice<<endl;
        cout<<findWinner(userChoice, compChoice) <<endl;

        cout<<"------------------------------------"<<endl;
        cout<<"\nPlay again? (y/n): ";
        cin>>playAgain;

    }while(playAgain=='y' || playAgain=='Y');

    cout<<"Thanks for playing!"<<endl;
    return 0;
}