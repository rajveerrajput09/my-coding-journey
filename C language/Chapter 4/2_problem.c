// makent he multiplication of the table n

#include <stdio.h>

int main() {

    int n;
    int i = 1;
    printf("Entre the number n: ");
    scanf("%d",&n);

    while (i<= 10){
        printf("%d multipy  by %d is equal to %d\n",n,i,n*i);
        i += 1;
    }

    return 0;
}