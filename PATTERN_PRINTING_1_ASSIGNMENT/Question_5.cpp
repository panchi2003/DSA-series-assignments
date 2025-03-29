#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Number of rows: ";
    cin>>m;
    cout<<"Number of columns: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        
            if(i==1 || i==m){
                for(int j=1;j<=n;j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            else{
                for(int j=1;j<=n;j++){
                    if(j==1 || j==n){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
    }
    return 0;
}