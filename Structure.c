#include<stdio.h>

struct student
{
	int rno;
	char sname[10];
	float s1,s2,s3,total;
	float per;
	 
};

int main()
{
	struct student sobj1;
	
	printf("Enter Student roll no");
	scanf("%d",&sobj1.rno);
	
	printf("Enter Student Name");
	scanf("%s",&sobj1.sname);
	
	
	printf("Enter marks of three subjects");
	scanf("%f%f%f",&sobj1.s1,&sobj1.s2,&sobj1.s3);
	
	sobj1.total=sobj1.s1+sobj1.s2+sobj1.s3;
	sobj1.per=sobj1.total/3;
	
	
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	printf("\nRoll no\t\tStudent Name\t\tSubject1\t\tSubject2\t\tSubject3\t\tTotal\t\tPercentage");
	printf("\n%d\t\t%s\t\t%f\t\t%f\t\t%f\t\t%f\t%f",sobj1.rno,sobj1.sname,sobj1.s1,sobj1.s2,sobj1.s3,sobj1.total,sobj1.per);
	printf("\n-----------------------------------------------------------------------------------------------------------------------");
	
	

}
