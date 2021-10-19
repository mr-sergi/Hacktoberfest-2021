#include<stdio.h>

int main()
{
// declaration section
	int empid,empsal;
	float pf,hra,ta,gross;
	char empname[10];
	
// enter employee details
	  
	 printf("Enter employee id: ");
	 scanf("%d",&empid);
	 
	 printf("Enter employee salary: ");
	 scanf("%d",&empsal);
	 
	 printf("Enter employee name: ");
	 scanf("%s",&empname);
	 
// calculation
	 
	 pf=sal*0.05;
	 hra=sal*0.04;
	 ta=sal*0.03;
	 gross=sal+hra+ta-pf;
	 
// display
	 
	 printf("\nEmployee id: %d",empid);
	 printf("\nEmployee sal: %d",empsal);
	 printf("\nEmployee name: %s",empname);
	 printf("\nPF: %f",pf);
	 printf("\nHRA: %f",hra);
	 printf("\nTA: %f",ta);
	 printf("\nGROSS: %f",gross);
	 
	 return 0;
	 
}
