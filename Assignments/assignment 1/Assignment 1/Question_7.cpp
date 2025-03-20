/*Take an integer between 65 and 90 as input and print its corresponding uppercase letter*/

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number between 65 and 90: ";
    cin>>x;
    cout<<"Corresponding uppercase: "<<(char)x;
}