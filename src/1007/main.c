#include <stdio.h>

int main() {
  int a = 0, b = 0, c = 0, d = 0, diff = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  diff = a * b - c * d;
  printf("DIFERENCA = %d\n", diff);
  return 0;
}