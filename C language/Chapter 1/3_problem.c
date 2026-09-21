#include <stdio.h>

int main() {
    int radius;
    int height;
    
    // It's helpful to add a prompt so you know when the program is waiting for your input!
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    // Fix: Store the calculation in a float variable first
    float area = 3.14 * radius * radius;
    float area_cylinder = area * height;
    // Print the float variable using %f (and use %.2f to limit it to 2 decimal places!)
    printf("The area of the circle of radius %d is: %.2f\n", radius, area);
    printf("the volume of cylinder is: %f\n",area_cylinder);
    
    return 0;
}

// so here we count both area of circle and volume of cylinder.