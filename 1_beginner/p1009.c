#include <stdio.h>

int main(void)
{
  char name[20];
  float salary_fixed, sale;

  scanf("%s", name);
  scanf("%f", &salary_fixed);
  scanf("%f", &sale);
  printf("TOTAL = R$ %.2f", ((salary_fixed)+(sale*0.15)));
  printf("\n");
  return 0;
}
