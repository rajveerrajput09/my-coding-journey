//write the code using the array to make the table of 5

#include <stdio.h>

int main() {
    int input;
    printf("Enter the number of terms for the table: ");
    scanf("%d", &input);

    int table[10];

    for (int i = 0; i < 10; i++) {
        table[i] = (i + 1) * input;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", table[i]);
    }

    return 0;
}