#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int r=0,last_digit=0;
    while(n>0){
        r=r*10;
        last_digit=n%10;
        r=r+last_digit;
        n/=10;
    }
    cout<<"Reversed digit: "<<r;
    return 0;
}