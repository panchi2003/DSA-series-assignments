#include<iostream>
using namespace std;

void odd(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }

}

int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The odd numbers between "<<a<<" and "<<b <<" is "<<endl;

    odd(a,b);
    return 0;
}