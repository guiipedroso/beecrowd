#include <stdio.h>

int main()
{
  float a,b,c,result; 
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  result = ((a*2)+(b*3)+(c*5))/10;	

  printf("MEDIA = %.1f", result);
  printf("\n");
  return(0);
}
