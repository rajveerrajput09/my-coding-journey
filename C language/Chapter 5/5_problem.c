// create the nth element of the fibonacci series using the reccursion

#include <stdio.h>


int sum(int n);

int sum(int n){
    if (n == 1){
        return 1;
    }
    return sum(n-1) + n;
    
}


int main(){
    int number = 5;
    printf(" the sum of the first %d natural number is %d",number,sum(number));
    
    return 0;
}




