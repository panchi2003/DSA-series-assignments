#include<iostream>
using namespace std;

int main(){
    int a=500,b,c;
    if(a<=400)
    b=300;
    c=200;
    cout<<"value of b and c are respectively "<<b<<"and"<<c;
    return 0;

}
//output: value of b and c are respectively (random) and 200 because the if condition is not true so the line of code after the if condition will not be executed that's why the value of b will be random.