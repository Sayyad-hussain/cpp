#include<iostream>
using namespace std;
int main()
{
    float sum = 1.0;
    for(float i = 2; i<=100; i =i + 2)
    {
        
        sum =sum + 1/i;
    }
    cout<<"sum of a series : "<<sum<<endl;

    return 0;
}