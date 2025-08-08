#include<stdio.h>

typedef struct 
{
    char model[50];
    int year;
    int price;
}car;


int main(){

    car cars[] = {
    {"Mustang",2025, 32888},
    {"Corvette",2024,66644},
    {"Challanger",2025,43000}
    };

    int size = sizeof(cars) / sizeof(cars[0]);

    for (size_t i = 0; i < size; i++)
    {
        printf("%s %d $%d\n",cars[i].model,cars[i].year,cars[i].price);
    }
    

    return 0;
}