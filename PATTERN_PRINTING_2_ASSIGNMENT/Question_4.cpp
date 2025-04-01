#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int a=65;
        for(int j=1;j<=n+1-i;j++){
            cout<<char(a);
            a++;
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
            int b=65+n;
            for(int m=1;m<=n-1;m++){
                cout<<char(b);
                b++;
            }
        }
        else{
            int c=65+n;
            for(int r=1;r<=n+1-i;r++){
                cout<<char(c);
                c++;
            }
        }
        cout<<endl;
    }
    return 0;
}