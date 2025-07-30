#include<stdio.h>
#include<math.h>

int main(){

    double redius=0.0;
    double area=0.0;
    double serfaceArea=0.0;
    double volumeOfSphere=0.0;
    const double PI=3.14159;

    printf("Enter the redius of the cicle(in centimeter): ");
    scanf("%lf",&redius);

    area=PI*pow(redius,2);
    serfaceArea=4*PI*pow(redius,2);
    volumeOfSphere=4*PI*pow(redius,3)/3;

    printf("Your %0.3lf cm redius circles area is %0.3lf cm^2\n",redius,area);
    printf("Your %0.3lf cm redius sphere serface area is %0.3lf cm^2",redius,serfaceArea);
    printf("Your %0.3lf cm redius sphere volum is %0.3lf cm^3",redius,volumeOfSphere);
    return 0;
}