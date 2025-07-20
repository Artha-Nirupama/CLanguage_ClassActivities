#include<stdio.h>

int main(){
    int acceleration,distance,time;

    printf("Enter the traveled acceleration:");
    scanf("%d",&acceleration);

    printf("Enter the total time that you traveled:");
    scanf("%d",&time);

    distance=(acceleration*time*time)/2;

    printf("%d",distance);

    return 0;
}