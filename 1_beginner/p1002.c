#include <stdio.h>
#define PI 3.14159

int main()
{
  double R;
  
  scanf("%lf", &R);

  printf("A=%.4lf", R*R*PI);
  
  printf("\n");
  return(0);
}
