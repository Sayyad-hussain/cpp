//c++ program thats take four integers and print their sum , product , and averrage 
//
//  main.cpp
//  abc
//
//  Created by sheKARri on 02/09/2023.
//
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d = 0;
    cout<<"please enter your four integers: ";
    cin>>a>>b>>c>>d;
    
    int sum = a+b+c+d;
    cout<<"Sum: "<<sum<<endl;
    
    int product = a*b*c*d;
    cout<<"Product: "<<product<<endl;
    
    float average = sum/4.0;
    cout<<"Average: "<<average<<endl;
    
    system("pause");
    return 0;
};
