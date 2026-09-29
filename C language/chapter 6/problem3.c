// 3. Write a program to change the value of a variable to ten times of its current value

#include <stdio.h>

int main() {
    int i = 10;
    int *j = &i;

    *j = *j * 10;

    printf("%d", i);

    return 0;
}
