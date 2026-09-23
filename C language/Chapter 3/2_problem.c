// // 2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main(){

    int marks1, marks2, marks3;

    printf("Enter marks of 1st subject: ");
    scanf("%d", &marks1);

    printf("Enter marks of 2nd subject: ");
    scanf("%d", &marks2);

    printf("Enter marks of 3rd subject: ");
    scanf("%d", &marks3);

    float total = ((marks1 + marks2 + marks3) / 300.0) * 100;

    if (total >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33)
        printf("The student has passed with %.2f%%", total);
    else
        printf("The student has failed with %.2f%%", total);


    return 0;
}