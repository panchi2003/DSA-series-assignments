#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the marks of three students ";
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"A scores least";
    }
    else if(b<a && b<c){
        cout<<"B scores least";
    }
    else if(c<a && c<b){
        cout<<"C scores least";
    }
    else{
        cout<<"invalid entry";
    }
}