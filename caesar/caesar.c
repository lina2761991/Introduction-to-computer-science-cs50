#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

   bool isNumber(char number[]);
   int rotate(int a,int key);
   int convertAscii(char c);

   if ( argc != 2 || !isNumber(argv[1]) || strcmp(argv[0],"./caesar")!=0)
   {
        printf("%i",argc);
        printf("Usage: ./caesar key\n");
        return 1;
   }
   else {
      printf("%i",argc);
      //printf("the missing");
      //printf("%s",argv[1]);

    int x = atoi(argv[1]);
    string s = get_string("plaintext: ");
    printf("ciphertext: ");
    // we have to loop through the x and rotate every character
    int n = strlen(s);
    for(int i=0;i<n;i++){
      if(isalpha(s[i])){
         int v =  rotate(convertAscii(s[i]),x);
          printf("%c",(char)v ); //important
         }
      else {
             printf("%c",s[i]);
         }
       }
      printf("\n");
      return 0;
      }
}

bool isNumber(char number[])
{
   int i = 0;
   for (; number[i] != 0; i++){
    if (!isdigit(number[i]))
            return false;
            }
    return true;
}


int convertAscii(char c){

    int k = c ;
    return k;
}


int rotate(int a,int key){
   int c ;
   key = key % 26;
   // for the majus
   if((65<=a) && (a<=90)){
      c = a + key;
      if(!((65<=c) && (c<=90))) {
         c = c-26;
      }
   }

   // i should do for the minus

    if((97<=a) && (a<=122)){

      c = a +key;
      if(!((97<=c) && (c<=122))){
          c = c-26;
          }
   }
   return c;
}

// i should add the condition on the key value (if its less than 26 or not and go from there)