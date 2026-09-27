// programe to print the multiplication table of 10 in reversed manner

#include <stdio.h>
int main()
    {
    int number = 10;
    for (int i = 10;i >= 1; i--) {
        printf("%d multiply by %d is equal to %d\n",number,i,number*i);
    }   
    return 0;
}