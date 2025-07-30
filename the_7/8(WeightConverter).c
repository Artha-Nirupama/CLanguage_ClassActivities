#include<stdio.h>
#include<math.h>

int main(){
    int choice=0;
    float pound=0.0;
    float kelogram=0.0;

    printf("The weight Converter\n");
    printf("The options are:\n");
    printf("1.kilogram to pounds\n");
    printf("2.pounds to kilogram\n");
    printf("Enter your choice(1 or 2): ");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Enter your weight in kilogram(kg) to convert it to pound: ");
        scanf("%f",&kelogram);

        pound=kelogram*2.205;

        printf("%0.3f kg = %0.3f lbs",kelogram,pound);
    }
    else if(choice==2){
        printf("Enter your weight in pounds(lbs) to convert it to kelogram: ");
        scanf("%f",&pound);

        kelogram=pound/2.205;
        
        printf(" %0.3f lbs = %0.3f kg ",pound,kelogram);
    }
    else{
        printf("Your choice is invalid!");
    }
    return 0;
}