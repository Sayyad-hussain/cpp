//write a cpp program that calculate quadratic formnula 
// x = -b+(b^2 - 4ac)^1/2 /2a 

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a , b, c = 0.0;
    int x,d=0.0;

    cout<<"please enter (a) value: ";
    cin>>a;

    cout<<"please enter (b) value: ";
    cin>>b;

    cout<<"please enter (c) value: ";
    cin>>c;

    d = b*b-4.0*a*c;
    x = -b+sqrt(d)/2.0*a;

    cout<<"Quadratic value: "<<x<<endl;
    return 0;
}