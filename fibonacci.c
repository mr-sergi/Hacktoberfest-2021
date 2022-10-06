#include<stdio.h>    
int main()    
{    
 	int n1=0,n2=1,n3=0,i,number;    
 	
	 printf("Enter the number of elements:");    
 	scanf("%d",&number);    
    
  printf("\nFibonacci Series : ");
    
 	for(i=0; i<number; i++)    
 	{     
 		  printf(" %d",n3);    
  	  n1 = n2;    
  		 n2 = n3;  
	   	n3 = n1+n2;  
	 }  
  
  return 0;  
 }   
