#include<iostream>
using namespace std;

float area(int r){
    float ar;
    ar=3.14*r*r;
    return ar;

}

int main(){
    int r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cout<<"Area of circle: "<<area(r);
    return 0;
}