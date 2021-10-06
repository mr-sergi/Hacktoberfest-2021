#include<iostream>

using namespace std;

template<class T>
void getarray(T a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
template<class T>
void sortarray(T a,int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min]);
            {
                min=j;
            }

        }
        swap(a[min],a[i]);
    }

}
template<class T>
void showarray(T a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter the elements";
    getarray(a,n);
    sortarray(a,n);
    cout<<"sorted array is";
    showarray(a,n);
    return 0;
}
