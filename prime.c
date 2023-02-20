#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    int c = 0;
    bool flag;
    for (int i = 1; i<= number ;i++){
        if(number % i == 0 ){
            c++;
        }
    }
    if (c == 2) {
        flag = true;
  }
  else {
         flag = false;
  }
  return flag;
}
