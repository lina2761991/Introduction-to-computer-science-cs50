// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

string replace(string x);

int main(int argc, string argv[])
{

   // printf("hellllo ,%i\n",argc);
    if(argc == 2)
    {
      replace(argv[1]);
    }

    else
    {
        printf("Usage: ./no-vowels word\n");
        return 1;//indicates this is an error
    }

    printf("%s\n", replace(argv[1]));

}


string replace(string x){
    int n = strlen(x);
    for(int i =0;i<n ;i++){
      if(x[i] =='a'){
         x[i] = '6';
      }
      else if( x[i] =='e'){
        x[i] = '3';
      }
      else if( x[i] =='i'){
       x[i] = '1';
      }
      else if( x[i] =='o'){
         x[i] = '0';
      }

    }
    return x ;

}

