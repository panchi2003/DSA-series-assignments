#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3;
    double ab,bc,ac;
    cout<<"Enter the points: "<<endl;
    cout<<"x1,x2 and x3 :"<<endl;
    cin>>x1>>x2>>x3;
    cout<<"y1,y2 and y3:"<<endl;
    cin>>y1>>y2>>y3;
    ab=sqrt(pow(x2-x1 ,2)+ pow(y2-y1 ,2));
    bc=sqrt(pow(x3-x2 ,2)+ pow(y3-y2, 2));
    ac=sqrt(pow(x3-x1, 2)+ pow(y3-y1, 2));
    if(ac==ab+bc){
        cout<<"These three points lie on straight line";
    }
    else{
        cout<<"These points doesn't lie on straight line";
    }
}