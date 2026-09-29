// Write the function to convert celcius into farenhite

#include <stdio.h>

float convert_cel_to_faren(float celsius);

float convert_cel_to_faren(float celsius){
    float fahrenheit = (celsius * 1.8) + 32.0;
    return fahrenheit;
    
}


int main(){
    float celsius = 50.00;
    float farenhite = convert_cel_to_faren(celsius);
    printf("the value of the %f celcius to farenhite is %f",celsius,farenhite);
    
    return 0;
}