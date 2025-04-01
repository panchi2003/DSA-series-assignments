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
        int a=65;

        for(int k=1;k<=2*i-1;k++){
            cout<<char(a);
            a++;
        }
        }
        cout<<endl;
    }
    return 0;
    
}