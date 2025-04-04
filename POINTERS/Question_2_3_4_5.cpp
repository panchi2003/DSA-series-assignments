/*
[QUESTION 2]
ANSWER: a) p is a pointer and q is an integer

[QUESTION 3]
ANSWER: 11 10 11

[QUESTION 4]
ANSWER: a) ptr now points to b

[QUESTION 5]
ANSWER: Yes the following program snippet is correct.
*/

#include<iostream>
using namespace std;

int main(){
    int a=10,b=20;
    int *ptr= &a;
    b=*ptr +1;
    ptr=&b;
    cout<<*ptr<<" "<<a<<" "<<b;

}