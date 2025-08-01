#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num=0;
    int i=1;
    int max=50;
    int min=1;

    printf("Number Guesing Game\n");
    printf("Enter the your number(1-50):");
    scanf("%d",&num);

    srand(time(NULL));

    int randNum=(rand()%(max-min+1))+min;

    while (randNum!=num)
    {
        if (num<randNum)
        {
            printf("Random number is bigger than that!");
        }
        else
        {
            printf("Random number is small than that!");
        }
        
        printf("try Again!(1-50):");
        scanf("%d",&num);
        i++;
    }
    printf("You Win(%d is the wining number)!You tryed %d times",randNum,i);
    return 0;
}