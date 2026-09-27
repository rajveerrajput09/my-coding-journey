// Write the progeams to calculate the avarage of the theree numebrs

#include <stdio.h>

float average(int a,int b,int c) ;


float average(int a,int b,int c) {

    float avg = (a+b+c)/ 3;
    
    return avg;
}

int main(){
    int a= 11000;
    int b= 2;
    int c= 3;
    float avg=average(a,b,c);
    printf("The average of the %d,%d,%d is %f",a,b,c,avg);
    
    return 0;

}