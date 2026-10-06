#include <stdio.h>
#include <string.h>
#include <ctype.h>  // Required for isalpha()
#include <math.h>   // Required for round()

int calculate_class(char text[]);

int main() {
    char sentence[500]; // Expanded size to fit longer user paragraphs

    printf("Text: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    int grade = calculate_class(sentence);
    
    // CS50 requires specific output text formats for extreme grade levels
    if (grade < 1) {
        printf("Before Grade 1\n");
    } else if (grade >= 16) {
        printf("Grade 16+\\n");
    } else {
        printf("Grade %d\n", grade);
    }
        
    return 0;
}

int calculate_class(char text[]) {
    int letters = 0;
    int words = 0;
    int sentences = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        // 1. Count letters (letters must be alphabetic characters only)
        if (isalpha(text[i])) {
            letters++;
        }
        // 2. Count words (by tracking spaces; text starts with 1 word if it has characters)
        if (text[i] == ' ') {
            words++;
        }
        // 3. Count sentences
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
    }
    
    // Account for the last word because it doesn't end with a space
    if (strlen(text) > 0) {
        words++;
    }

    // Calculate averages per 100 words (cast to float to avoid integer truncation)
    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;

    // Apply Coleman-Liau formula and round to nearest integer
    float index = 0.0588 * L - 0.296 * S - 15.8;
    
    return (int) round(index);    
}
