// cpp program for printing factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    
    int x =1;
    int f = 1;
    cout<<"please enter a number: ";
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        f = f * i;
    }

    cout<<"Factorial of a given number: "<<f<<endl;

    return 0;
}