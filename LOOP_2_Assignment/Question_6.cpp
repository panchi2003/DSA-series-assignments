#include<iostream>
using namespace std;

int main(){
    int n,r=0,last_digit=0;
    cout<<"Enter a number: ";
    cin>>n;
    int m=n;
    while(n>0){
        r=r*10;
        last_digit=n%10;
        r+=last_digit;
        n/=10;
    }
    cout<<"Reverse: "<<r<<endl;
    int sum=m+r;
    cout<<"Sum: "<<sum;
    return 0;
}