#include<iostream>
using namespace std;

int main()
{
    int n1,n2,d1,d2;
    float sum;
    cout<<"Enter the numerator and denominator of fraction 1: ";
    cin>>n1>>d1;
    cout<<"Enter the numerator and denominator of fraction 2: ";
    cin>>n2>>d2;

    sum=(float)((n1*d2)+(n2*d1))/(d1*d2);
    cout<<"The sum is : "<<sum;

}