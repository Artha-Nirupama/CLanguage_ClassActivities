#include<stdio.h>

int main(){
    int x;
    
    printf("Enter the number that you want to check:");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("Your number is a even number!");
    }
    else{
        printf("Your number is a odd number!");
    }
    return 0;
}