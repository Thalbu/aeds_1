#include <stdio.h>
#define BUFSZ 256
int main(void) {
  char line[BUFSZ];
  fgets(line, BUFSZ, stdin);
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  int e=0;
  int f=0;
  int i=0;
  int j=0;
  int k=0;
  int total=0;
  int resto=0;
  int x=0;
  int y=0;
  sscanf (line,"%d %d %d %d %d %d %d %d %d\n", &a, &b, &c, &d, &e, &f, &i, &j, &k);
    total= a*10+b*9+c*8+d*7+e*6+f*5+i*4+j*3+k*2;

  while (total>=11) {
    total= total-11;
    resto=total;
  }
  if (resto == 0 || 1) {
    x=0;
  }
  if (resto== 10||9||8||7||6||5||4||3||2) {
  x=11-resto;
}
    total= a*11+b*10+c*9+d*8+e*7+f*6+i*5+j*4+k*3+x*2;
  while (total>=11) {
    total=total-11;
    resto=total;
}
  if (resto == 0 || 1) {
    y=0;
}
  if (resto== 10||9||8||7||6||5||4||3||2) {
    y=11-resto;
}
    printf("%d %d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, i, j, k, x, y );

  return 0;
}
