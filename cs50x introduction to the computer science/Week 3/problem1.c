// plularity



#include <stdio.h>
#include <string.h>

// 1. Define the Struct
typedef struct {
    int votes;
    char candidate_name[50];
} candidates_votes;

// 2. Main function with standard command-line arguments
int main (int argc, char *argv[]) {
    
    // 3. Check the candidate count
    int candidate_count = argc - 1;
    int highest_score = 0;

    // Validate number of candidates
    if (candidate_count > 9) {
        printf("The number of candidates must be below 9\n");
        return 1;
    }
    if (candidate_count < 1) {
        printf("Usage: %s [candidate_name1] [candidate_name2] ...\n", argv[0]);
        return 1;
    }

    // 4. Create the Array of Structs
    candidates_votes pool[9];

    // 5. The Registration Loop (Copying names from argv)
    for (int i = 0; i < candidate_count; i++) {
        strcpy(pool[i].candidate_name, argv[i + 1]);
        pool[i].votes = 0;  // Start everyone at 0 votes
    }

    // 6. Ask for the total number of voters
    int voters_number;
    printf("Total number of voters: ");
    scanf("%d", &voters_number);

    // 7. Loop to collect votes from each voter
    for (int j = 0; j < voters_number; j++) {
        printf("Vote: ");
        char input_name[50]; // Correct string array declaration
        scanf("%s", input_name); // Read string without '&'

        // Flag tracking variable to check if a vote matches anyone
        int vote_successful = 0;

        // Search through the pool to match the name
        for (int z = 0; z < candidate_count; z++) {
            // Using strcmp instead of ==
            if (strcmp(input_name, pool[z].candidate_name) == 0) {
                pool[z].votes += 1; // Increment candidate's vote
                vote_successful = 1; // Mark as successful
                break; // Stop looking for this specific voter
            }
        }

        // If the inner loop finished and found no match
        if (vote_successful == 0) {
            printf("Invalid vote.\n");
        }
    }

    // 8. Find the Highest Score (First Pass)
    for (int a = 0; a < candidate_count; a++) {
        if (pool[a].votes > highest_score) {
            highest_score = pool[a].votes; // Direct integer assignment
        }
    }
    
    // 9. Print All Winners matching the Highest Score (Second Pass)
    for (int b = 0; b < candidate_count; b++) {
        if (pool[b].votes == highest_score) {
            printf("%s\n", pool[b].candidate_name); // Clean printing
        }
    }

    return 0;
}
