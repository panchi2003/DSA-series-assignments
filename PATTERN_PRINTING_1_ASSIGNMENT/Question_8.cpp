#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n;j++){
            
            if(j>=n+1-i){
                cout<<char(a);
                a++;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }   
    return 0;
}