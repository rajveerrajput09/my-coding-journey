// This code is used to the calculate the remainder of a division operation. It prompts the user to input a dividend and a divisor, then computes and displays the remainder when the dividend is divided by the divisor.


#include <stdio.h>

int main() {
    int divident;
    int divisor;
    printf("Give me your divident :");
    scanf("%d",&divident);    
    printf("Give me your divisor :");
    scanf("%d",&divisor);

    printf("When %d is divided by %d the remainder is %d",divident,divisor,divident%divisor);    
    
    return 0;
}