#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,i,sum;
    cout<<"Enter a number: ";
    cin>>n;
    sum=1;
    for(i=1;i<n;i++){
        sum=pow(i+1,2)+sum;
    }
    cout<<"The sum of squares of first n natural numbers: "<<sum;
}