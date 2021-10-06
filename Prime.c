#include<stdio.h>
#include<conio.h>
int main(){
    int n,temp=0;
    printf("Enter the number to check prime:");
    scanf("%d",&n);
    for(int i=2 ; i<n ; i++){
        if(n%i==0)
            temp++;
    }
    if(temp>0)
        printf("%d is not a Prime Number",n);
    else
        printf("%d is a Prime Number",n);
    return 0;
 }
