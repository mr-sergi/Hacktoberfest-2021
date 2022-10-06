#include <bits/stdc++.h>
using namespace std;
 
void print_square(int n)
{
    int i, j;
     
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)    
                cout << "*";        
            else   
                cout << " ";        
        }
        cout << "\n";
    }
 
}
 
int main()
{
    int rows;
    cout<<"Enter number of Rows - ";
    cin>>rows;
    print_square(rows);
    return 0;
}
