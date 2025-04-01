#include<iostream>
using namespace std;

void square(int n){
    int i=1;
    int sq;
    while(i<=n){
        sq=i*i;
        cout<<sq<<endl;
        i++;

    }

}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    square(n);
    return 0;
}