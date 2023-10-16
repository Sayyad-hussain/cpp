//cpp program that read number of hours.it computes and display the number of week , days and hours
// within the input number of hours.

#include<iostream>
using namespace std;
int main()
{
    int hours;

    cout<<"please enter hours: ";
    cin>>hours;

    int week = hours / 168 ;

    hours = hours % 168;

    int days = hours / 24;
    hours = hours % 24 ;

    cout<<week<<" weeks "<<days<<" days "<<hours<<" hours "<<endl;
    cout<<endl;

    return 0;
}