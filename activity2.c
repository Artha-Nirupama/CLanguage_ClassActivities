#include<stdio.h>

int main(){
    int price,discountPresentage,discount,finalPrice;

    printf("Enter the price of the item:");
    scanf("%d",&price);

    printf("Enter the discount presentage of the item:");
    scanf("%d",&discountPresentage);

    discount=(price/100)*discountPresentage;

    finalPrice=price-discount;

    printf("%d",finalPrice);

    return 0;
}