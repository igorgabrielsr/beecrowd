#include <stdio.h>

int main() {
  int employee_number, hours_worked;
  double hourly_wage, salary;
  scanf("%d", &employee_number);
  scanf("%d", &hours_worked);
  scanf("%lf", &hourly_wage);
  salary = hours_worked * hourly_wage;
  printf("NUMBER = %d\n", employee_number);
  printf("SALARY = U$ %.2lf\n", salary);
  return 0;
}
