#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    int m;
    m=(int)ch;
    if((m>=65 && m<=90) || (m>=97 && m<=122)){
        cout<<"It is an alphabet";
    }
    else{
        cout<<"It is a special character";
    }
}