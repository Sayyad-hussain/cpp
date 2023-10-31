//write a cpp program that input of a number and display  weekday. 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"please enter number of a weekday: ";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"Monday.";
            break;
        case 2:
            cout<<"Tuesday.";
            break;
        case 3:
            cout<<"Wednesday.";
            break;
        case 4:
            cout<<"Thursday.";
            break;
        case 5:
            cout<<"Friday.";
            break;
        case 6:
            cout<<"Satureday.";
            break;
        case 7:
            cout<<"Sunday.";
            break;
        default:
            cout<<"Invalid entry.";
    }
    return 0;
}