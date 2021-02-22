#include <stdio.h>
#include <math.h>

double x;

double fatorial(int i)
{
  x = 1;
  while (i!=0) {
    x = x * i;
    i--;
  }
  return(x);
}
int main()
{
  int i=1;
  float e = 1;
  while ((1/fatorial(i)) > pow(10,-6)) {
  e = e + 1/fatorial(i);
  i++;
  }

  printf(" %.4f\n", e);
    return(0);
}
