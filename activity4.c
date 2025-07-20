#include<stdio.h>

int main(){
    int x,y,result;

    printf("Enter the First number:");
    scanf("%d",&x);

    printf("Enter the secound number:");
    scanf("%d",&y);

    if(x>y){
        printf("Frist number is the large between two number input!");
    }
    else if (x==y)
    {
        printf("Frist and Secound numbers has same value, between two number input!");
    }
    else
    {
        printf("Secound number is the large between two number input!");
    }
    return 0;
}