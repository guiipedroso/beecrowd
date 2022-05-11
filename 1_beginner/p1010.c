#include <stdio.h>

int main()
{
  int cp1, cp2, n1, n2;
  float v1, v2;

  scanf("%d %d %f", &cp1, &n1, &v1);
  scanf("%d %d %f", &cp2, &n2, &v2);


  printf("VALOR A PAGAR: R$ %.2f", ((v1*n1)+(v2*n2)));
  printf("\n");
  return(0);
}
