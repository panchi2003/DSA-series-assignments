#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the x co-ordinate: ";
    cin>>x;
    cout<<"Enter the y co-ordinate: ";
    cin>>y;
    if(x!=0 && y==0){
        cout<<"Lies on x axis";
    }
    else if(x==0 && y!=0){
        cout<<"Lies on y axis";
    }
    else if(x==0 && y==0){
        cout<<"Lies at origin";
    }
    else{
        cout<<"Lies at any quardant";
    }
}