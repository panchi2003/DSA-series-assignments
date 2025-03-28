#include<iostream>
using namespace std;

int main()
{
    int n=10,a=0,b=1,sum=0;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}