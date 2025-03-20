/*Take input of principle,time and rate and find the simple interest*/
#include<iostream>
using namespace std;

int main(){
    int p,r,t;
    float SI;
    cout<<"Enter Principle: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"The Simple Interest is "<<SI;
}