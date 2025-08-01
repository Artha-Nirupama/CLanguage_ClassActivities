#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    int max=6;
    int min=1;

    int randNum= (rand() % (max-min+1))+min;
    
    printf("%d",randNum);

    return 0;
}