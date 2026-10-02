// write the following pattern in the C

//        #
//       ##
//      ###
//     ####
//    #####
//   ######
//  #######
// ########


// take the number of lines we wanna print
// print the first line
//print the ### in it


// we use the nested loop for it for loop in the for loop

#include <stdio.h>

int main(void) {
    int lines;
    printf("enter what is your number:   ");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++) {
                for (int space = 1; space <= lines - i; space++) {
            printf(" ");
        }
        
        for (int f = 1; f <= i; f++) {
            printf("#");
        }
        
        printf("\n");   
    }
    return 0;
}
