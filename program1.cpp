// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     for(int i = 4 ; i>=0 ; )
//     {
//         cout<<a[i]<<endl;
//     }

// return 0;
// };
// this program takes input the radius and print the circumference of the circle

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius , circumference = 0;
    double pi = M_PI;
    cout<<"please enter radius of a circle: ";
    cin>>radius;

    circumference = 2*pi*radius;

    cout<<"Circumference: "<<circumference<<endl;
    
};
