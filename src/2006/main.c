#include <stdio.h>

int main() {
  int t, c;
  int n[5];
  scanf("%d", &t);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &n[i]);
    if (n[i] == t) {
      c++;
    }
  }
  printf("%d\n", c);
  return 0;
}
