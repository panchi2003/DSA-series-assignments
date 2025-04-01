#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=1;k++){
            cout<<"*";
        }
        for(int m=n-i;m>=1;m--){
            cout<<" ";
        }
        for(int l=n+1-i;l>=1;l--){
            cout<<" ";
        }
        if(n==i){
            cout<<"";
        }
        else{
            for(int h=1;h<=1;h++){
                cout<<"*";
            }
        }
        cout <<endl;
    }
    return 0;
}