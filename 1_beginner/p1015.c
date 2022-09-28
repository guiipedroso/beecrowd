#include <stdio.h>
#include <math.h>

int
main()
  {
  float x1, x2, y1, y2, result = 0;
  
  scanf("%f %f", &x1, &y1);
  scanf("%f %f", &x2, &y2);
  x1 = x2 - x1;
  y1 = y2 - y1;
  result = pow(x1, 2);
  result += pow(y1, 2);

  result = sqrt(result);
  
  printf("%.4f", result);
  
  printf("\n");
  return(0);
  }
