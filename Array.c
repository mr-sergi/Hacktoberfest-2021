#include<stdio.h>
#include<stdlib.h>
#define max 20

int main()
{
	int arr[max][max],arr2[max][max],arr3[max][max]={0};
	int i,j,k;
	int r1,c1,r2,c2;
	
	printf("how many row and col do you want in matrix1: ");
	scanf("%d%d",&r1,&c1);
	
	printf("how many row and col do you want in matrix2: ");
	scanf("%d%d",&r2,&c2);
	
	if(c1==r2)
	{
		printf("Enter elements for matrix 1..\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("Enter elements for matrix 2..\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		//multiplication
		for(i=0;i<r1;i++)
		{
			for(k=0;k<c2;k++)
			{
				for(j=0;j<c1;j++)
				{
					arr3[i][k]=arr3[i][k]+(arr[i][j]*arr2[j][k]);
				}
			}
		}
			printf("\n--------Matrix Multiplication--------\n");
			
			for(i=0;i<r1;i++)
		
			{
			for(j=0;j<c2;j++)
			{
				printf("%5d",arr3[i][j]);
			}
			printf("\n");
		}
	}

	else
		{
		
		printf("Multiplication not possible");
	}
	}
	
	
