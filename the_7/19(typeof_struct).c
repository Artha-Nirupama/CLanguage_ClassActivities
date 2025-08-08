#include <stdio.h>
#include <stdbool.h>
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Students;

int main(){

    Students student1 = {"Artha",20,9.9,true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%s\n", (student1.isFullTime) ? "Yes!" : "No!");
    printf("%0.2f\n", student1.gpa);

    Students student2 = {0}; //this is how set null to the objects in C

    return 0;
}