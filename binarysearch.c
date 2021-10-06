#include<stdio.h>
int binarysearch(int arr[],int x,int l,int h) 
{
    int mid;
    if (l>h)
    {
    	return -1;
    }
    mid = (l+h) / 2;
    if (x==arr[mid])
    {
    	return mid;
	}
	else if (x<arr[mid]) 
    {
        binarysearch(arr,x,l,mid-1);
    } 
   else 
    {
        binarysearch(arr,x,mid+1,h);
    }
}
int main() 
{
    int n,i,x,index,l,h;
    printf("\nEnter the length of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements in the array :");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    l=0;
	h=n-1;
	printf("\nEnter element to be searched:");
	scanf("%d", &x);
    index=binarysearch(arr,x,l,h);
    if (index!=-1) 
    {

      printf("\nThe element is present at index number:%d", index);
    }
	else
	{
		printf("\nThe number is not present in the array");
    }
    return 0;
}
