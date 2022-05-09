#include <stdio.h>
#define PI 3.14159

int main()
{
  float r;

  scanf("%f", &r);

  printf("VOLUME = %.3f", ((4.0/3)*PI*r*r*r));
  printf("\n");
  return (0);
}
