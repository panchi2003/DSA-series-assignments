#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    int i=1,sum=0;
    while(i<=N){
        if(i%5==0){
            continue;
        }
        sum=sum+i;
        if(sum>300){
            sum-=i;
            break;
        }
        i++;
    }
    cout<<"The sum is "<<sum;
    return 0;
}