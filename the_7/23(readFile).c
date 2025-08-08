#include<stdio.h>

int main(){

    FILE *pFile = fopen("input.txt","r");

    char buffer[1024] = {0};//buffer is used for as a waaiting room also its look like a waiting bus.also has variable charactariztics

    if (pFile == NULL)
    {
        printf("Could not open file");
        return 1;
    }
    
    while (fgets(buffer,sizeof(buffer),pFile) != NULL)
    {
        printf("%s",buffer);
    }
    

    fclose(pFile);

    return 0;
}