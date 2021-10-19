 #include<stdio.h>
//enter any no if no is -ve then covert given no in +ve.
int main()
{
	int n;
	
	printf("Enter any number:");
	scanf("%d",&n);

	if(n<0)
	{
		n=-n;  //n*-1
	}
	printf("\nYour no is: %d",n);
	
	return 0;
	
}
