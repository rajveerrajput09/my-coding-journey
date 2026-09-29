// write the function to calcute the amount of force exherted by the earth on the object of mass m and (g = 9.8m/s)

#include <stdio.h>

float force_calculator(float m);

float force_calculator(float m) {


    float force= m * 9.8;
    return force;
}

int main(){
    
    float mass = 72;
    float force = force_calculator(mass);
    printf("The force exerted by the object of mass %f is %f newton m/s\n",mass ,force);
    return 0;
}