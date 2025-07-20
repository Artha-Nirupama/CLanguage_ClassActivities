#include<stdio.h>

int main(){
    int day;

    printf("Enter the weekday number to find the what is the day:");
    scanf("%d",&day);

    if (day==1)
    {
        printf("The day is Monday!😀");
    }
    else if(day==2)
    {
        printf("The day is Tuesday!😁");
    }
    else if (day==3)
    {
        printf("The day is Wednesday!🙂");
    }
    else if (day==4)
    {
        printf("The day is Thurseday!😄");
    }
    else if (day==5)
    {
        printf("The day is Friday!😎");
    }
    else if (day==6)
    {
        printf("The day is Saturday!🤗");
    }
    else if (day==7)
    {
        printf("The day is Sunday!🤩");
    }
    else{
        printf("The input is nit Valid!.Try again!😞");
    }
    return 0;
}