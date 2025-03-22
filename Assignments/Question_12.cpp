#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a choice: "<<endl;
    cout<<"Enter 1 for cm to ft"<<endl;
    cout<<"Enter 2 for km to miles"<<endl;
    cout<<"Enter 3 for USD to INR"<<endl;
    cout<<"Enter 4 for Exit"<<endl;
    cin>>a;
    switch (a){
        case 1:{
            float cm,ft;
            cout<<"Enter distance in cm: ";
            cin>>cm;
            ft=cm*0.032808;
            cout<<"cm to ft : "<<ft;
            break;
        }
        case 2:{
            float km,miles;
            cout<<"Enter the distance in km: ";
            cin>>km;
            miles=km*0.62137;
            cout<<"km to miles: "<<miles;
            break;
        }
        case 3:{
            float USD,INR;
            cout<<"Enter the USD: ";
            cin>>USD;
            INR=USD*86;
            cout<<"USD to INR: "<<INR;
            break;
        }
        case 4:{
            cout<<"EXIT";
            break;
        }

    }
    return 0;
}