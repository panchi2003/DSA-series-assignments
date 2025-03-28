#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i; 
        cout<<fact<<endl;
    }
    return 0;
}