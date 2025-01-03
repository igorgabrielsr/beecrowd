#include <stdio.h>

int main() {
  int code_1 = 0, code_2 = 0, units_1 = 0, units_2 = 0;
  float price_1 = 0, price_2 = 0, total = 0;
  scanf("%d %d %f", &code_1, &units_1, &price_1);
  scanf("%d %d %f", &code_2, &units_2, &price_2);
  total = (units_1 * price_1) + (units_2 * price_2);
  printf("VALOR A PAGAR: R$ %.2f\n", total);
  return 0;
}