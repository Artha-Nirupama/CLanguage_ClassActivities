#include<stdio.h>

void birthday(int *age);

 int main(){

    int age = 20 ;
    int *pAge = &age ; 

    birthday(pAge);

    printf("You are %d years old in this year!",age);

    return 0;
}

void birthday(int *age){
    (*age)++;
}