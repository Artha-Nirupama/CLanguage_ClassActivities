#include<stdio.h>

int main(){

    int day;

    printf("Enter the week day to find out what is the day is:");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("The day is Monday!😁");
        break;
    case 2:
        printf("The day is Tuesday!😁");
        break;
    case 3:
        printf("The day is Wednesday!😃");
        break;
    case 4:
        printf("The day is thursday!😄");
        break;
    case 5:
        printf("The day is Friday!😎");
        break;
    case 6:
        printf("The day is Saturday!🤩");
        break;
    case 7:
        printf("The day is Sunday!🤗");
        break;
    default:
        printf("The input is invalid and try again!😇");
        break;
    }
    return 0;
}