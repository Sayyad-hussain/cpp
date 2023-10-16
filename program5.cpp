// Cpp program for convert a three digit number into reverse order like 123 => 321 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please enter three digit nber: ";
    cin>>n;

    int a = n / 100;

    n = n % 100;

    int b = n / 10;

    n = n % 10;

    cout<<"Reverse number: "<<n<<b<<a<<endl;
    
    return 0;
}