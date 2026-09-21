#include <stdio.h>

int main()
{
    int length;
    int breadth;
    
    // 1. Ask for length (Use double quotes and clean scanf)
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    // 2. Ask for breadth (Use double quotes and clean scanf)
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    
    // 3. Calculate and print results
    int area = length * breadth;
    printf("The area of the rectangle with length %d and breadth %d is: %d\n", length, breadth, area);
    
    return 0;
}
