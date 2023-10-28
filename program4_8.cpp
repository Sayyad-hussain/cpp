//write a program that inputs salary and grade . it adds 50% bonus if the grade is greater than 15 it add 
//25% bonus if the grade is 15 or less and display the total salary .

#include<iostream>
using namespace std;
int main()
{
    int salary = 0;
    int grade = 0;
    int bonus = 0;
    cout<<"please enter salary: ";
    cin>>salary;
    cout<<"please enter your grade: ";
    cin>>grade;

    if(grade>15)
    {
        bonus = salary * 50.0 / 100.0;
    }
    else if(grade<=15)
    {
        bonus = salary * 25.0 / 100.0;
    }

    salary = salary + bonus;

    cout<<"Total salary with bonus : "<<salary<<endl;

    return 0;
}