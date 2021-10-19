#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you,char comp)
{
    //return 1 if you win ,-1 if you lost ,0 if match drawn
    
    //Draw condition :- 'ss,gg,ww'
    if(you == comp)
    {
        return 0;
    }
    //Non-draw conditions :- 'sg,gs,sw,ws,gw,wg'
    if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }
    if(you == 'w' && comp == 's')
    {
        return -1;
    }
    else if(you == 's' && comp == 'w')
    {
        return 1;
    }
    if(you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    char you,comp;
    srand(time(0));
    int number = rand()%100+1;

    if(number<33)
    {
        comp = 's';
    }
    else if(number>33 && number<66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter\n's' for snake\t'w' for water\t'g' for gun\n: ");
    scanf("%c",&you);
    int result = snakeWaterGun(you,comp);
    printf("\nYou choose %c and computer choose %c.\n ",you,comp);
    if(result == 0)
    {
        printf("\n\tMATCH\t DRAW \t\n\n");
    }
    else if(result == 1)
    {
        printf("\n\tYOU\t WIN\t\n\n");
    }
    else{
        printf("\n\tYOU\t LOST\t\n\n");
    }
    return 0;
}
