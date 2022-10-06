#include <iostream>
using namespace std;

class Employee
{
    int id;


public:
    int salary;

    void setId(void)
    {
        //salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
        cout<<"enter the salary "<<id<<" is"<<endl;
        cin>>salary;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
        cout<<"the salary of " <<id<<" is"<<salary<<endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();


    }
    for (int i = 0; i < 4; i++)
    {
        fb[i].getId();

    }


    return 0;
}
