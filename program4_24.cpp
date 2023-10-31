// sum qll number from 1 to 15 using while loop 

#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;
    while(i<=15)
    {
        sum = sum + i;
        i++;
    }

    cout<<"sum : "<<sum<<endl;


    return 0;
}