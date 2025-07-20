#include<stdio.h>

int main(){
    float BSa,HRA,DA,GSa;

    printf("Enter the Basic Salary:");
    scanf("%f",&BSa);

    if (BSa<=10000)
    {
        HRA=BSa/100*20;
        DA=BSa/100*80;
    }
    else if (BSa<=20000)
    {
        HRA=BSa/100*25;
        DA=BSa/100*90;
    }
    else{
        HRA=BSa/100*30;
        DA=BSa/100*95;
    }
    GSa=BSa+HRA+DA;
    printf("%f",GSa);

    return 0;
}