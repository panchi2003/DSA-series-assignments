#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        {
            for(int j=1;j<=n+1-i;j++){
            cout<<j;
        }

        if(i==1){
            cout<<"";
        }
        else{
            for(int k=1;k<=2*i-3;k++){
                cout<<" ";
            }
        }

        if(i==1){
            for(int m=n-1;m>=1;m--){
                cout<<m;
            }

        }
        else{
            for(int p=n+1-i;p>=1;p--){
                cout<<p;
                
            }
        }
    }
    cout<<endl;
    }
    return 0;

}