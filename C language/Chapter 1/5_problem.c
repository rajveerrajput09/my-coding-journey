// finding the simple intrest

#include <stdio.h>

int main() {

    float p,r,t,si;
    printf("Enter the principle amount: \n");   
    scanf("%f",&p);
    printf("Enter the rate of intrest: \n");
    scanf("%f",&r);
    printf("Enter the time period: \n");
    scanf("%f",&t);
    si = (p * r * t) / 100;
    printf("The simple interest is: %f", si);

    return 0;
}