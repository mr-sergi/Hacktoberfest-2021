#include <stdio.h>

int main() {
	int n1,n2;
	int *p1,*p2;
	int sum;
	
	p1=&n1;
	p2=&n2;
	
	printf("Enter any two nos: ");
	scanf("%d%d",&n1,&n2);
	
	sum=*p1+*p2;
	
	printf("\n Addition is : %d",sum);
	
	
	return 0;
}
