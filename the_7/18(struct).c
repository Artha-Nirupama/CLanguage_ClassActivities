#include <stdio.h>
#include <stdbool.h>
struct Students{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

int main(){

    struct Students student1 = {"Artha",20,9.9,true};

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%s\n", (student1.isFullTime) ? "Yes!" : "No!");
    printf("%0.2f\n", student1.gpa);

    return 0;
}