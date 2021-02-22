#include <stdio.h>
#include <math.h>
int main (void) {
  printf("digite os valores de a, b e c da sua equacao\n");
  int a=0;
  int b=0;
  int c=0;
  float delta=0;
  float x1=0;
  float x2=0;
  float d=0;

  scanf ("%d %d %d", &a, &b, &c);
    delta= (b*b) - 4 * a * c;
    d=delta;
    delta = sqrt (delta);
    x1= (-b + delta) / (2 * a);
    x2= (-b - delta)/(2 * a);
    if (d<0) {
      printf ("As reizes nao sao reais\n");
    }
    else {
        printf ("%.0f %.0f \n", x1, x2 );
      }

return 0;
}
