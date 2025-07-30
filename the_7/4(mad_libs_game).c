#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";
    bool isHuman;
    int answer=1;

    printf("Enter a adjective(Discription): ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1]='\0';

    printf("Enter the noun(person/animal name): ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter a adjective(Discription): ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1]='\0';

    printf("Enter a verd(-ing): ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';

    printf("Enter a adjective(Discription): ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1]='\0';

    printf("The noun is a person?:");
    scanf("%d",&answer);

    if (answer==0)
    {
        isHuman=false;
    }
    else
    {
        isHuman=true;
    }

    if (isHuman)
    {
        printf("\n Today i went to a %s park.",adjective1);
        printf("And there,i can see %s conner of the park.",noun);
        printf("The %s is the one and only %s person in the park.",noun,verb);
        printf("he/she is %s.",adjective2);
        printf("Alsoo he/she can %s.",adjective3);
    }
    else
    {
        printf("\n Today i went to a %s Zoo.",adjective1);
        printf("And there is a %s caged in the conner of the zoo.",noun);
        printf("That %s is the one and only %s in zoo.",noun,verb);
        printf("It has %s.",adjective2);
        printf("Alsoo its can %s.",adjective3);
    }
    
    return 0;
}