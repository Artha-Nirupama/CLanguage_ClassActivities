#include<stdio.h>
#include<math.h>

int main(){

    double principal=0.0;
    double rate=0.0;
    int timeCompounded=0;
    int years=0;
    double totalReturn=0.0;

    printf("Compound instresting caculater\n");

    printf("Enter the principal(P)");
    scanf("%lf",&principal);

    printf("Enter the rate as precentage(r):");
    scanf("%lf",&rate);

    printf("Enter the time compound(n):");
    scanf("%d",&timeCompounded);

    printf("Enter the years(t):");
    scanf("%d",&years);

    totalReturn=pow(principal*(1+(rate/timeCompounded)),timeCompounded*years);

    printf("After %d years Your total return is $%.3lf",years,totalReturn);
    return 0;
}