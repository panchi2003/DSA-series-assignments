#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int r=0,sum=0;
    while(n>0){
        r=n%10;
        if(r%2==0){
            sum+=r;
        }
        n/=10;
    
    }
    cout<<sum;
    return 0;

}