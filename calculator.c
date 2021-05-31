
#include <stdio.h>

int
main ()
{
  float a  ;
  float b ;
  
  printf("Enter an Integer = ");
  scanf("%f", &a);
  printf("Enter an Integer  = ");
  scanf("%f", &b);
  printf ("The two integers are a and b.\n");
  printf ("The value of a is %.2f.\n", a);
  printf ("The value of b is %.2f.\n", b);
  printf ("The addition of %.2f and %.2f is %.2f.\n", a, b, a + b);
  printf ("The subtraction of %.2f and %.2f is %.2f.\n", a, b, a - b);
  printf ("The multiplication of %.2f and %.2f is %.2f.\n", a, b, a * b);
  printf ("The division of %.2f and %.2f is %.2f.", a, b, a / b);
  return 0;
}
