//4. write the fuctiona and pass the value by the reference

#include <stdio.h>

int demo(int*, int*);

int demo(int* a, int* b) {
    *a = 50;// here the value is changed for the a .

    int value = *a + *b;
    return value;
}

int main() {
    int i = 1;
    int b = 2;

    int final = demo(&i, &b);

    printf("%d", final);

    return 0;
}
