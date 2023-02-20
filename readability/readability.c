#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sent(string text);
int index(int nbrletters,int nbrwords,int nbrsenten);
int main(void)
{


    string text = get_string("Text: ");
    int nbrletters = count_letters(text);
    int nbrwords = count_words(text);
    int nbrsenten = count_sent(text);
    //printf("%i letters\n",nbrletters);
    //printf("%i words\n",nbrwords);
    //printf("%i sentences\n",nbrsenten);
    int j = index(nbrletters,nbrwords,nbrsenten);


    //printf("the index is %i",j);

    if(j>=16){
        printf("Grade 16+\n");
    }
    else if(j<1){
        printf("Before Grade 1\n");
    }
    else {
        printf("Grade %i\n",j);
    }


}

 int count_letters(string x){
    int somme =0;
    int n = strlen(x);
    for(int i=0;i<n;i++){
        if((x[i]>='a' ||x[i]<='z'|| x[i]>='A' ||x[i]<='Z')&& (x[i]!=' ')&& (x[i]!='"')&& (x[i]!=',')&& (x[i]!='?')&& (x[i]!='!')&& (x[i]!='#')&& (x[i]!='-')&& (x[i]!='_')&& (x[i]!='/') && (x[i]!='.')&& (x[i]!=';') && (x[i]!= '\'')) {
            somme = somme+1;
        }
    }
   return somme;

 }

 int count_words(string text){
       int somme =0;
       int n = strlen(text);
       for(int i=0;i<n;i++){
        if(text[i]==' '){
            somme = somme +1;
        }
       }
     return somme+1;
 }


  int count_sent(string text){
       int somme =0;
       int n = strlen(text);
       for(int i=0;i<n;i++){
        if(text[i]=='.' || text[i]=='!'||text[i]=='?'){
            somme = somme +1;
        }
       }
     return somme;
 }

int index(int nbrletters,int nbrwords,int nbrsenten){

    return  round((0.0588 * ((float)nbrletters/(float)nbrwords)*100)-  (0.296 *((float)nbrsenten/(float)nbrwords)*100) - 15.8);
}


