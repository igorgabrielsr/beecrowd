#include <stdio.h>
const double PI = 3.14159;

int main() {
  double a, r;
  scanf("%lf", &r);
  a = PI * r * r;
  printf("A=%.4lf\n", a);
}