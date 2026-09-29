//TO make the number guessing game

#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {
    // Seed the random number generator using the current time
    srand(time(NULL));

    // The formula locks the result strictly between 1 and 100
    int random_number = (rand() % 100) + 1;
    int gussed;
    int number_of_gusses = 0;

    do{
           printf("Guess the number; ");
           scanf("%d",&gussed);
           if (gussed < random_number){
               printf("Higher please!1\n");
           } 
           else if (gussed > random_number){
               printf("Lower please!!\n");
           } 
    
           number_of_gusses += 1; 
        
    }while(gussed != random_number);

    printf("you have gussed the right number in %d", number_of_gusses);
    return 0;
}
