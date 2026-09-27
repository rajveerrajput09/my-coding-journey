// Write a programme to sum first 10 natural numeber using do for loop

#include <stdio.h>
int main(){
    int sum = 0;
    for(int i = 1;i <= 10;i++){
        sum += i;
    }
    printf("the sum is %d",sum);
    return 0;
}