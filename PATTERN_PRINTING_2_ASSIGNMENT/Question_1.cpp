#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
    {
        {
            for(int j=n-i;j>=1;j--){
                cout<<" ";
            }
        }

        for(int k=1;k<=2*i-1;k++){
            cout<<k;
        }
        }
        cout<<endl;
    }
    return 0;
    
}