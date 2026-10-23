// CS50 code for the runoff questoion

// they have alredy given the pseudocode and excution logic to us and we have to build this

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Max voters and candidates limits defined here
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is the jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, elimination status
typedef struct {
    char name[50]; // Defined size for string storage
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int candidate_count;
int voter_count;

// Function prototypes
bool vote(int voter, int rank, char name[]);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, char *argv[]) {
    // Check for invalid usage
    if (argc < 2) {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES) {
        printf("Maximum number of candidates is %d\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++) {
        strcpy(candidates[i].name, argv[i + 1]);
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    // Standard C input validation using scanf
    printf("Number of voters: ");
    if (scanf("%d", &voter_count) != 1 || voter_count <= 0 || voter_count > MAX_VOTERS) {
        printf("Invalid number of voters.\n");
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++) {
        for (int j = 0; j < candidate_count; j++) {
            char name[50]; // Buffer to read string using standard C
            printf("Rank %d: ", j + 1);
            scanf("%s", name);

            // Record vote, keep track of invalid vote
            if (!vote(i, j, name)) {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        printf("\n");
    }

    // Keep holding runoffs until a winner exists
    while (true) {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won 
        bool won = print_winner();
        if (won) {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone remaining wins
        if (tie) {
            for (int i = 0; i < candidate_count; i++) {
                if (!candidates[i].eliminated) {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to 0 for next round
        for (int i = 0; i < candidate_count; i++) {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// ============================================================================
// TODO: FILL IN THE FUNCTIONS BELOW
// ============================================================================

// Record preference if vote is valid
bool vote(int voter, int rank, char name[]) {
    for (int i= 0 ; i < candidate_count;i++){
        if(strcmp(name,candidates[i].name) == 0 ){ 
            // Identify the name assiged to which number
            
            preferences[voter][rank] = i;

            return true;
        }
    }
    
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void) {
    for (int voter = 0; voter< voter_count ; voter++){
        for (int j = 0; j< candidate_count ; j++){
            int a = preferences[voter][j];
            if (candidates[a].eliminated != true){
                candidates[a].votes++;
                break;
            }
        }
    }
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // Check every single candidate one by one
    for (int i = 0; i < candidate_count; i++)
    {
        // Rule check: Does this candidate have strictly MORE than half the total votes?
        if (candidates[i].votes > (voter_count / 2))
        {
            // Print their name to the terminal screen
            printf("%s\n", candidates[i].name);
            
            // Return true to terminate the entire election process
            return true;
        }
    }
    // Return false if no one crossed the majority line in this round
    return false;
}


// Return the minimum number of votes any remaining candidate has
int find_min(void) {

        int min = voter_count;

    for (int i = 0 ; i < candidate_count ; i++){
        
        if (candidates[i].eliminated != true){
            if(candidates[i].votes < min){
                min = candidates[i].votes;
            }
        }
    }

    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min) {
    for ( int i = 0 ; i < candidate_count ; i ++){
        if ( candidates[i].eliminated != true){
            if (candidates[i].votes != min){
                return false;
            }
        }
    }
    return true;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min) {
    for (int i = 0 ; i < candidate_count ; i++){
        if (candidates[i].eliminated == false && candidates[i].votes == min)
        {
            candidates[i].eliminated = true;
        }
    }
}
