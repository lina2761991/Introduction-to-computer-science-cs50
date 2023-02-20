#include <cs50.h>
#include <stdio.h>




int main(void)
{

  int Height;
  int count = 0;

  do
  {
     Height = get_int("Height: ");
  }
  while ( ( 9 <= Height ) || ( Height <= 0 ) );


  for (int i = Height; i>0 ; i--){


      for (int j = 1; j<i ; j++){


             printf(" ");


    }


      count++;
      for (int k = 0; k<count ; k++){

        printf("#");
      }

        printf("\n");


  }

}



