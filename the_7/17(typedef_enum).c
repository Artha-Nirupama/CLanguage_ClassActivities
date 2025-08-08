#include<stdio.h>

typedef enum{
    sunday,monday,tuesday,wendesday,thursday,friday,saturday
}Day;

int main(){

    Day today = monday ;

    printf("%d",today);

    return 0;
}