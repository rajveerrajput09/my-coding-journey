//write the code using the array to make the table of 5

#include <stdio.h>

int main() {
    int table[10];

    for (int i = 0; i < 10; i++) {
        table[i] = (i + 1) * 5;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", table[i]);
    }

    return 0;
}