#include<iostream>
using namespace std;

int main(){
    int n,a=3;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The G.P. is "<<endl;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=4;
    }
    return 0;

}