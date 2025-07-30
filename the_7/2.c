#include<stdio.h>
#include<string.h>

int main(){
    char name[50]="";
    int age=0;
    float gpa=0;

    printf("Enter your full name: ");
    fgets(name,sizeof(name),stdin);             
    //when using fgets for the get sting that has white space,buffer error encount use the getchar(); before the that line
    //if sacnf used jest add a space before the spesifer(eg:scanf(" %d",&variable))
    //use #include<string.h> to deal with the sting and its provide the funtions
    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your gpa: ");
    scanf("%f",&gpa);

    printf("Hello!%s",name);
    printf("You are %d year old\n",age);
    printf("Your gpa is %.2f",gpa);

    return 0;
}