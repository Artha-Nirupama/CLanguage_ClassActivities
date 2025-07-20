#include<stdio.h>

int main(){
    char x;

    printf("Enter your character here:");
    scanf("%c",&x);
    if (x>='a' && x<='z' || x>='A' && x<='Z')
    {
        printf("Your character is in alphabet!😁");
    }
    else{
        printf("Your character is not in alphabet!🙃");
    }
    return 0;
}