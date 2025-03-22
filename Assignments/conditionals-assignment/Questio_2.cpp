#include<iostream>
using namespace std;

int main()
{
    float r,area,circum;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    area=3.14*r*r;
    circum=2*3.14*r;
    if(area>circum){
        cout<<"area is greater";
    }
    else{
        cout<<"circumference is greater";
    }
}