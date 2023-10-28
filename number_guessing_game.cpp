#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secret_number= std::rand()% 50 + 1;
    int guess;
    int tries=0;
    cout<<"WELCOME TO THE  NUMBER GUESSING GAME"<<endl;
    cout<<"Guess the number between 1 to 50."<<endl;
    do{
       cout<<"Enter your guess: ";
       cin>>guess;
       ++tries;
       if(guess<secret_number){
        cout<<"Its too low, Please enter another number.";
       }
       else if(guess> secret_number){
        cout<<"Its too high, Please enter another number.";
       }
       else{
        cout<<"Congrats! your gussed number is "<<secret_number<<" in "<<tries<<" time"<<endl;
       }

    }
    while(guess!= secret_number);
    return 0;
}