#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i=3,j=5,sub,x,y,z;
int *p, *q;
p = &i;
q = &j;

z = p == &i;
  printf("%d\n", z);
  
sub = *p - *q;
  printf("%d\n",sub);

y = **&p;
    printf("%d\n", y);

x = 3 - *p/(*q) + 7;
    printf("%d\n", x);

  return 0;
}
/*
1
-2
3
10
*/