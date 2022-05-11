#include <stdio.h>

int main()
{
  int hours, num_employee; 
  float r_hour;

  scanf("%d", &num_employee);
  scanf("%d", &hours);
  scanf("%f", &r_hour);

  printf("NUMBER = %d\n", num_employee);
  printf("SALARY = U$ %.2f", hours * r_hour);
  printf("\n");
  return 0;
}
