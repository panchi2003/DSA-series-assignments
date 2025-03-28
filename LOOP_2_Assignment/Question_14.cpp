#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:  ";
    cin>>n;
    int last_digit,cube,sum=0;
    int m;
    m=n;
    while(n>0)
    {
        last_digit=n%10;
        cube=pow(last_digit,3);
        n/=10;
        sum+=cube;
    }
    if(m==sum){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
    return 0;
}