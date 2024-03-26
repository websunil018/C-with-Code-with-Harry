#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 8;
   const  float b = 7.333;
  // PI = 7.33; // cannot do this since PI is a constant
   printf(" tab character \t\t my backslash \a %f", PI);
  // b = 7.22; // cannot do this since b is constant
  //  printf("Hello World\n");
 // printf("The valu of a is %d and the vaiu of b is %2.4f\n", a, b);
  //  printf("%d18.4f   ",b);
    return 0;
}