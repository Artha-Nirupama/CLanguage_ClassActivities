#include<stdio.h>

int main()
{
    FILE *pFile = fopen("output.txt","w");

    char text[] = "This is my first writing file\n nothing spacial!" ;

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    fprintf(pFile, "%s",text);

    printf("Fill written successfully!");

    fclose(pFile);

    return 0;
}
