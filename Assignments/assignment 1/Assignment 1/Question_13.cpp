#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int x1,x2,y2,y1,d;
    cout<<"x1: ";
    cin>>x1;
    cout<<"x2: ";
    cin>>x2;
    cout<<"y2: ";
    cin>>y2;
    cout<<"y1: ";
    cin>>y1;
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"The Euclidean distance : "<<d;
}