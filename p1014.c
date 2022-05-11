#include <stdio.h>

int main()
{
  int distance;
  float km;
 
  scanf("%d", &distance);
  scanf("%f", &km);

  printf("%.3f km/l", distance/km);
  printf("\n");
  return(0);
}
