#include <stdio.h>

int main() {
  const double PI = 3.14159;
  double a, r;
  scanf("%lf", &r);
  a = PI * r * r;
  printf("A=%.4lf\n", a);
  return 0;
}
