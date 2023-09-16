#include<iostream>
#include<stdio.h>
using namespace std;
int a,b;

void getdata(){

    cout<<"Enter Two Numbers: ";
    cin>>a>>b;

}

void calculator(){

    char Operation;

    cout<<"+ - * / \n";

    cout<<"Enter Your Operation: ";
    cin>>Operation;

    switch(Operation){
        case '+':cout<<"Result="<<a+b;
            break;
        case '-':cout<<"Result="<<a-b;
            break;
        case '*':cout<<"Result="<<a*b;
            break;
        case '/':cout<<"Result="<<a/b;
            break;
        default:cout<<"Invalid Choice" ;
            break;    
        } 

}
    int main(){

        getdata();
        calculator();
            
            return 0;
        
    }