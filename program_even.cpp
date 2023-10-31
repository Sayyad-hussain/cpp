#include<iostream>
using namespace std;
int main()
{
    int x=0;
    cout<<"please enter a number: ";
    cin>>x;
    if(x%2==0)
    {
        cout<<x<<" is an Even number. ";
    }
    else
    {
        cout<<x<<" is an Odd number. ";
    }
    
    return 0;

}