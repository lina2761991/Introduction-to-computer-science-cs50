#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    convert(input);
}





void convert(string input)
{

string word = input;
int n = strlen(word);
while (strlen(word)>0){

    //printf("%s",word);
    char last = input[n-1];
    int idxToDel = n-1;
    printf("%d",last-'0');//printing the last element
    memmove(&word[idxToDel], &word[idxToDel + 1], strlen(word) - idxToDel);
    convert(word);
    }




}