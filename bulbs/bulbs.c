#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;



void print_bulb(char bit);
int convertAscii(char c);
char convertBi(int a);



int main(void)
{
    string s = get_string("Message: ");
    int n = strlen(s);
    for(int i=0;i<n;i++){
           convertBi(convertAscii(s[i]));//convert each line to binary
           printf("\n");
      }
}

void print_bulb(char bit)
{
    if (bit == '0')
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == '1')
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}

int convertAscii(char c){
    int k = c ;
    return k;
}


char convertBi(int a){
    void print_bulb(char bit);

    char str[10] = "";
    char ch1 = '0';
    char ch2 = '1';


    while(a >0 ){

        if(a%2 == 0 ){
          strncat(str, &ch1, 1);
        }
        else  if(a%2 == 1 ){
           strncat(str, &ch2, 1);
        }
            a = a/2;
    }

    if(strlen(str)<9){
        for(int i =0;i<9-strlen(str);i++){
             strncat(str , &ch1, 1);
        }
    }

   int length = strlen(str);
   for(int j=length-1; j>=0; j--){
         print_bulb(str[j]);
   }

    return 0;
}


// we have to loop through the result and convert each char


