/*1.OUTPUT:
10
9
8
7
6
5
4
3
2
1
2.OUTPUT:
infinite loop of i
3.OUTPUT:
1
2
3
4
5
6
7
8
9
10
*/
#include<iostream>
using namespace std;

int main(){
    int i=1;
    while(i<=10)
    {
        cout<< i <<endl;
        i++;
    }
}