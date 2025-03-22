#include<iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter the measure of three sides of triangle: ";
    cin>>a>>b>>c;
    if(a==b && b==c && a==c){
        cout<<"It's an equilateral triangle";

    }
    else if(a!=b && b!=c && a!=c)
    {
        cout<<"It's scalene trianlgle ";
    }
    else{
        cout<<"It's an isoceles triangle";
    }
}