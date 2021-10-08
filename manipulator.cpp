#include<iostream>
#include<iomanip>      // this is header file to use manipulters like "setw"
using namespace std;
int main()
{
    //costant in c++
    
//    const int a=5;
//    cout<<"the value of a was: "<<a<<endl;
//    a=33;                                // you will get an error because a is constant
//    cout<<"the value of a is: "<<endl;

    //manipulators in c++
    
//    int a=37,b=4498,c=58788;
//    cout<<"the value of a without setw is: "<<a<<endl;
//    cout<<"the value of b without setw is: "<<b<<endl;
//    cout<<"the value of c without setw is: "<<c<<endl;
//    cout<<endl;
//
//
//    cout<<"the value of a with setw is: "<<setw(5)<<a<<endl;
//    cout<<"the value of b with setw is: "<<setw(5)<<b<<endl;
//    cout<<"the value of c with setw is: "<<setw(5)<<c<<endl;
    

    //operator precedence
    int a=5,b=6;
    int c=((((a*5)+b)-50)+33); // left to right
    cout<<c;

    return 0;

}
