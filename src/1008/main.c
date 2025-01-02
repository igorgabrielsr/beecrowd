#include <stdio.h>

int main() {
  int employee_number = 0, worked_hours = 0;
  float hourly_rate = 0.0;
  scanf("%d", &employee_number);
  scanf("%d", &worked_hours);
  scanf("%f", &hourly_rate);
  printf("NUMBER = %d\n", employee_number);
  printf("SALARY = U$ %.2f\n", worked_hours * hourly_rate);
  return 0;
}