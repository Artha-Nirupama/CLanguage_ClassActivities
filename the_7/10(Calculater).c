#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    char operater='\0';
    double num1=0.0;
    double num2=0.0;
    double result=0.0;

    printf("Enter the first number: ");
    scanf("%lf",&num1);

    printf("Enter the operater(+,-,*,/,%,^): ");
    scanf(" %c",&operater);
    
    printf("Enter the secound number: ");
    scanf("%lf",&num2);


    if (operater=='+')
    {
        result = num1 + num2;
        printf("The result is %.3lf.",result);
    }
    else if (operater=='-')
    {
        result = num1 - num2;
        printf("The result is %.3lf.",result);
    }
    else if (operater=='*')
    {
        result = num1 * num2;
        printf("The result is %.3lf.",result);
    }
    else if (operater=='/')
    {
        result = num1 / num2;
        printf("The result is %.3lf.",result);
    }
    else if (operater=='%')
    {   
        int x = num1;
        int y = num2;
        result = x % y;
        printf("The result is %.3lf.",result);
    }
    else if (operater=='^')
    {
        result = pow(num1,num2);
        printf("The result is %.3lf.",result);
    }
    else{
        printf("Enter a valid operater!");
    }
    return 0;
}