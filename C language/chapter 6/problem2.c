// 2. Write a program having a variable 'i'. Print the address of 'i'. Pass this variable to a function and print its address. Are these addresses same? Why?


#include <stdio.h>
int demo(int);

int demo(int c){
    return ("%p",c);
}

int main() {

    int i;
    printf("%p\n",i);
    int adress= demo(i);
    printf("%p",adress);
    
    return 0;
}

