#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    //printf("%i",score1);
    //printf("%i",score2);

    // TODO: Print the winner
    if(score1>score2){
        printf("Player 1 wins!\n");
    }
    else if (score1<score2){
        printf("Player 2 wins!\n");
    }
    else
         {
            printf("Tie\n");
            }
    }

int compute_score(string word)
{   int s= 0;

    int n = strlen(word);


    for(int i = 0; word[i]; i++){
        word[i] = tolower(word[i]);
        }


    for(int i=0;i<n;i++){

        if (word[i]=='a'|| word[i]=='e' ||word[i]=='i'|| word[i]=='l' ||word[i]=='n'|| word[i]=='o' ||word[i]=='r'|| word[i]=='s' ||word[i]=='t'|| word[i]=='u')
            {
                s = s+1;
            }
        else if (word[i]=='b'|| word[i]=='c' ||word[i]=='m'|| word[i]=='p' )
            {
                s = s+3;
            }
        else if (word[i]=='d'|| word[i]=='g' )
            {
                s = s+2;
            }
         else if (word[i]=='b'|| word[i]=='c' ||word[i]=='m'|| word[i]=='p' )
            {
                s = s+4;
            }

        else if (word[i]=='f'|| word[i]=='h' ||word[i]=='v'|| word[i]=='w' || word[i]=='y')
            {
                s = s+4;
            }
        else if (word[i]=='j'|| word[i]=='x' )
            {
                s = s+8;
            }
        else if (word[i]=='q'|| word[i]=='z' )
            {
                s = s+10;
            }
        else if (word[i]=='k' )
            {
                s = s+5;
            }
            else {
                s=s+0;
            }
        }
    return s;

    }
