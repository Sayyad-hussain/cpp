// Cpp program to convert height in meter to feet 
#include<iostream>
using namespace std;
int main()
{
    float meter = 0;
    
    cout<<"please enter your height in meter: ";
    cin>>meter;

    float feet = meter * 3.28084;
    
    cout<<" Height in feet : "<<feet<<endl;

    return 0;
}