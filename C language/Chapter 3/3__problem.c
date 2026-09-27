// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:

// Income Slab

// 2.5-5.0L

// 5.0L - 10.0L

// Above 10.0L

// Tax

// 5%

// 20%

// 30%



#include <stdio.h>
int main() {
    float income, tax;
    printf("Enter your income in lakhs: ");
    scanf("%f", &income);

    if (income <= 2.5 && income >= 0) {
        tax = 0;
    } 
    
    else if (income <= 5.0 && income > 2.5) {
        tax = income * 0.05;

    } 
    
    else if (income <= 10.0 && income > 5.0) {
        tax = income * 0.20;
    } 
    
    else {
        tax = income * 0.30;
    }
    printf("Income tax paid: %.2f lakhs\n", tax);
    return 0;
}