#include<iostream>
using namespace std;

int main(){
    int n,a=4;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The A.P. is "<<endl;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=3;
    }
    return 0;

}