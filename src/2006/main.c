#include <stdio.h>

int main() {
  int t, c;
  int r[5];
  scanf("%d\n", &t);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &r[i]);
  }
  for (int i = 0; i < 5; i++) {
    if (r[i] == t) {
      c++;
    }
  }
  printf("%d\n", c);
  return 0;
}