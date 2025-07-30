#include<stdio.h>
#include<math.h>

int main(){

    float celsius=0;
    float fahrenheit=0;
    int choice=0;

    printf("Temperature Program\n");

    printf("Choose the converte option(1 or 2),\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Your answer:");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Enter the Celsius value:");
        scanf("%f",&celsius);
        fahrenheit = 32 + (celsius*9/5);
        printf("%.3f °C = %.3f °F",celsius,fahrenheit);
    }
    else if (choice==2)
    {   
        printf("Enter the fahrenheit value:");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        printf("%.3f °F = %.3f °C",fahrenheit,celsius);
    }
    else
    {
        printf("Your converting option choice input is not valid!");
    }
    

    return 0;
}