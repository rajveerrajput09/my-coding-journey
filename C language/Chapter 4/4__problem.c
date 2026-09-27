// Write a programme to sum first 10 natural numeber using while loop

#include <stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    while(i <= 10){
        sum = sum + i;
        i ++;
    }
    printf("the sum is %d",sum);
    return 0;
}