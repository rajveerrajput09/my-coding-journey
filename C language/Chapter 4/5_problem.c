// Write a programme to sum first 10 natural numeber using do while loop

#include <stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    do{
        sum = sum + i;
        i ++;
    }while(i <= 10);
    printf("the sum is %d",sum);
    return 0;
}