#include<iostream>
using namespace std;

int main()
{
    int a=6, b=3;
    a += b *= 2;
    cout<< a << " " << b;
    return 0;
}
//output: 12 6