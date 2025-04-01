#include<iostream>
using namespace std;
void square(int a){
    int sq;
    sq=a*a;
    cout<<"The square is "<<sq;

}
void count(int n){
    int a=0;
    while(n>0){
        int r=0;
        r=n%10;
        if(r>0){
            a++;
        }
        n/=10;
    }
    cout<<"No of digit: "<<a<<endl;
    square(a);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    count(n);
    return 0;
}