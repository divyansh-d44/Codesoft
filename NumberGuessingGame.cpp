#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));

    int random = rand()%100+20;
    int guess =0;
    int moves =0;

    do
    {
        
        cout<< " Enter Your Guess Number "<<endl;
        cin >> guess;
        if(guess == random)
        cout << "Congrats1 right Guess after " << moves << "moves" <<endl;
        else if (guess<random)
        cout << "Wrong Guess! You Entered a Lower Number !" <<endl;
        else
        cout<< " Wrong Guess ! You Entered a Higher Number !" <<endl;
    
    } while(guess!=random);
    
}