// create the nth element of the fibonacci series using the reccursion

#include <stdio.h>


int fibonacci(int m);

int fibonacci(int m){
    if (m == 1 || m == 2){
        return m - 1;
    }
    
    return fibonacci(m-1) + fibonacci(m-2);
}


int main(){
    int num = 10;
    printf("The value of the %d number in the fibonacci series is the %d",num,fibonacci(num));
    return 0;
}




