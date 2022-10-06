#include<stdio.h>

int main()
{
	int n;
	printf("Enter any year: ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("\n It is a leap year");
	}
	else
	{
		printf("\n It is not a leap year");
	}
	return 0;
}
