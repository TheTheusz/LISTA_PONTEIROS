#include <stdio.h>

int main(void) {
  int i=3,j=5;
  int *p, *q;

  p = &i;
  q = &j;
  
  // p == &i --> VERDADE

  printf("p == &i \n");
  printf("%p == %p \n", p, &i);
  if(p==&i)printf("p == &i = verdade \n \n"); else printf("p==&i = falso \n");

  // *p - *q --> -2
  printf("*p - *q = %d \n \n", (*p - *q));

  //**&p --> 3
  printf("**&p = %d \n \n", **&p);

  //3 - *p/(*q) + 7 --> 10
  printf("3 - *p/(*q) + 7 = %d \n \n", (3 - (*p/(*q)) + 7));
}
