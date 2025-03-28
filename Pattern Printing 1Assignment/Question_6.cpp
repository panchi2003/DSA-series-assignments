#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<" ";

        }
        for(int k=1;k<=4;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 
//Not getting this question right properly.