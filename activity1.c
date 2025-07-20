#include<stdio.h>

int main(){
    int height,width,area;

    printf("Enter the height of the rectangle:");
    scanf("%d",&height);

    printf("Enter th ewidth of the rectangle:");
    scanf("%d",&width);

    area=height*width;

    printf("%d",area);

    return 0;
}