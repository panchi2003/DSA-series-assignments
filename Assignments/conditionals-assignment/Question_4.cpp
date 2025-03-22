#include<iostream>
using namespace std;

int main()
{
    float l,b,area,perimeter;
    cout<<"Enter the length and breadth ";
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"area of reactangle is greater";

    }
    else{
        cout<<"perimeter is greater";
    }
}