#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,i=0,dig;
    long sum=0;
    cout<<"\n Enter the decimal number:";
    cin>>n;
    while(n){
        dig=n%2;
        sum+=dig*pow(10,i);
        i++;
        n=n/2;
    }
    cout<<"\n Binary equivalent is:"<<sum;

    return 0;
}