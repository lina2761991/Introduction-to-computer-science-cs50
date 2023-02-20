#include <cs50.h>
#include <stdio.h>
// library containing trunc function
#include <math.h>


int main(void)
{
    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

   int Startsize;
   int Endsize;
   int year = 0;


   do
  {
     Startsize = get_int("Start size: ");
  }
  while (Startsize < 9);

    do
  {
    Endsize = get_int("End size: ");
  }
  while (Endsize < Startsize);


int population = Startsize;

 while(population < Endsize)

  {


    population = population + trunc(population/3) - trunc(population/4);
    year ++;


  }



 printf("Years: %i\n", year);




}
