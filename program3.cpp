//write a cpp program that inputs the distance traveled and the speed of vihicle.
//it calculates the time required to reach the destination and display it.

#include<iostream>
using namespace std;
int main()
{
    float distance, speed;
    float time;

    cout<<"please enter your distance in Kms: ";
    cin>>distance;

    cout<<"please enter your speed km/h: ";
    cin>>speed;

    time = distance/speed;

    cout<<"Time required to reach the destination: "<<time<<endl;

    system("pause");
    return 0;
}