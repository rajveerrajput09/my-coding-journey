#include <stdio.h>
#include <string.h> // For strlen()
#include <ctype.h>  // For isupper() and islower()

// Points assigned to each letter of the alphabet (A-Z)
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Prototype of our scoring function
int compute_score(char word[]);

int main(void) {
    char player1[50]; 
    char player2[50]; 

    // 1. Prompt the users for two words
    printf("Player 1: ");
    scanf("%49s", player1); 
    
    printf("Player 2: ");
    scanf("%49s", player2);

    // 2. Compute the score of each word using our function
    int score1 = compute_score(player1);
    int score2 = compute_score(player2);

    // 3. Compare scores and print the winner
    if (score1 > score2) {
        printf("Player 1 wins!\n");
    } 
    else if (score1 < score2) {
        printf("Player 2 wins!\n");
    } 
    else {
        printf("Tie!\n");
    }

    return 0;
}

// Custom function to calculate the total Scrabble points for a given word
int compute_score(char word[]) {
    int score = 0;

    // Loop steps through each character using strlen from string.h
    for (int i = 0, len = strlen(word); i < len; i++) {
        
        // If character is uppercase, subtract 'A' to match POINTS array index (0-25)
        if (isupper(word[i])) {
            score += POINTS[word[i] - 'A'];
        }
        // If character is lowercase, subtract 'a' to match POINTS array index (0-25)
        else if (islower(word[i])) {
            score += POINTS[word[i] - 'a'];
        }
        // Numbers, symbols, and punctuation marks are ignored (0 points added)
    }

    return score;
}
