#include<stdio.h>

float deposit();
int main(){
    printf("---The Bank Program---\n");
    
    int choice = 0;
    float Balance=0.0f;
    float Withdrow=0.0f;
    do
    {
        printf("\nSelect your choice:\n");
        printf("1.check The Balance\n");
        printf("2.Deposit money\n");
        printf("3.WithDrow money\n");
        printf("4.Exit\n");
        printf("Enter your selection:");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("Your balance is $ %.3f.",Balance);
                break;
            case 2:
                Balance+=deposit();
                printf("Your balance is $ %.3f.",Balance);
                break;
            case 3:
                printf("Enter the Withdrow amount: ");
                scanf("%f",&Withdrow);
                if (Withdrow>=Balance)
                {
                    printf("The account balance is not enough:");
                }
                else
                {
                    Balance-=Withdrow;
                    printf("Your balance is $ %.3f.",Balance);
                }
                break;
            case 4:
                printf("Have a Good Day!");
                break;
        default:
            printf("Enter amoung 1-4 number to interact");
            break;
        }

    } while (choice != 4);

    return 0;
}
float deposit(){
    float dip=0.0f;
    printf("Enter your amount to diposit:");
    scanf("%f",&dip);
    return dip;
}