#include <stdio.h>
const double PI = 3.14159;

int main() {
  double r = 0;
  scanf("%lf", &r);
  printf("VOLUME = %.3f\n", (4.0 / 3) * PI * r * r * r);
  return 0;
}