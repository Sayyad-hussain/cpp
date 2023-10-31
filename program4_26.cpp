#include<iostream>
using namespace std;
int main()
{
    int t = 1;
    cout<<"please enter a number for table: ";
    cin>>t;

    for(int i =1 ; i<=10; i++)
    {
        cout<<t<<"x"<<i<<"="<<i*t<<endl;
    }


    return 0;
}