#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (vote(i, j, name) == false)
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{

  bool res;
  int isElementPresent = 0;
  for (int i = 0; i < candidate_count; i++)

            {
                 if(strcmp(name,candidates[i].name)==0){

                    preferences[voter][rank] = i ;
                    isElementPresent = 1;
                }

            }

  if (isElementPresent) {
    res = true;
   }
  else {
    res = false;
   }

 return res;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
        for (int i = 0; i < voter_count; i++){
            for (int j = 0; j < candidate_count; j++){
            if(candidates[preferences[i][j]].eliminated == false ){

                candidates[preferences[i][j]].votes =  candidates[preferences[i][j]].votes+1;
                break;
            }

            else if(candidates[preferences[i][j]].eliminated == true ){


              if(candidates[preferences[i][j+1]].eliminated == false ){

                candidates[preferences[i][j+1]].votes =  candidates[preferences[i][j+1]].votes+1;
                break;
            }


            }

        }


}
}

bool print_winner(void){

int sumVotes = 0;
string w="";
bool res;
  for (int i = 0; i < voter_count; i++){
    sumVotes = candidates[i].votes + sumVotes;
    }


     for (int i = 0; i < voter_count; i++){

        if (( (candidates[i].votes) - round((float)(sumVotes/2)) > 0 ) ){
            w = candidates[i].name;
              break;
        }

}

if (strcmp(w,"") ==0){
    res = false;
}
else {
    printf("%s\n",w);
    res =  true;
}

return res;
}


// Return the minimum number of votes any remaining candidate has
int find_min(void)

{  int min = candidates[0].votes;
   for (int i=0; i<candidate_count;i++){

    if (candidates[i].votes < min && candidates[i].eliminated == false)// in case of error delete condition on eliminated
    {
        min = candidates[i].votes;

    }

}



    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{    bool res = false;
     int count = 0;
      int count2 = 0;
      int count3 = 0;
    for (int i=0; i<candidate_count;i++){
    if (candidates[i].votes == min && candidates[i].eliminated == false ){
       count = count +1;
    }
}


// the if of some eliminated and count = count of the tie and not eliminated are equal

 for (int i=0; i<candidate_count;i++){
    if (candidates[i].votes == min){
       count2 = count2 +1;
    }
    if (candidates[i].eliminated == false ){
       count3 = count3 +1;
    }
 }
if (count == candidate_count || count2 == count3 ){
 return true;

}
 return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
     for (int i=0; i<candidate_count;i++){
           if (candidates[i].votes == min ){
            candidates[i].eliminated = true;
           }
     }

    return;
}