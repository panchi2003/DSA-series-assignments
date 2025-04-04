#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter two values: "<<endl;
    cin>>x;
    cin>>y;
    int *p=&x;
    int *q=&y;
    int product=*p * *q;
    cout<<"The Product is "<<product;
    return 0;
}