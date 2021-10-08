#include<iostream>
using namespace std;
template<class T>
T selection_sort()
{
	T a[10];
	T temp;
	for(int i=0;i<10;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	cout<<"Sorting of integers"<<endl;
	selection_sort<int>();
	cout<<"Sorting of String ."<<endl;
	selection_sort<String>();
}

/* Output
Sorting of integers
a[0]=45
a[1]=32
a[2]=67
a[3]=56
a[4]=89
a[5]=23
a[6]=12
a[7]=41
a[8]=7
a[9]=4
4 7 12 23 32 41 45 56 67 89 
Sorting of floating nos.
a[0]=2.2
a[1]=5.4
a[2]=3.5
a[3]=8.6
a[4]=1.3
a[5]=9.6
a[6]=3.7
a[7]=7.6
a[8]=5.5
a[9]=3.3
1.3 2.2 3.3 3.5 3.7 5.4 5.5 7.6 8.6 9.6

*/
