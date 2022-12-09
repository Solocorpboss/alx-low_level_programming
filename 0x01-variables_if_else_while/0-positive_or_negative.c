#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Determines if a number is positive or negative or zero.
 *
 * Return: Alawys 0 (Success)
 */

int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX/2;
  if (n > 0)
    {
      printf("%d is positive\n", n);
    }
  else if (n == 0)
    {
      printf("%d is zero\n", n);
    }
  else
    {
      printf("%d id negstive\n", n);
    }
  return (0);
}
