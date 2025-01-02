#include <stdio.h>

int main() {
  char name[20];
  double salary = 0.0, sales = 0.0, total = 0.0;
  scanf("%s", name);
  scanf("%lf", &salary);
  scanf("%lf", &sales);
  total = salary + (sales * 0.15);
  printf("TOTAL = R$ %.2lf\n", total);
}