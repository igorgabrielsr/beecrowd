#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  int ok;
  int guess[4];
  for (int i = 0; i <= 4; i++) {
    scanf("%d", &guess[i]);
    if (guess[i] == t) {
      ok += 1;
    }
  }
  printf("%d\n", ok);
  return 0;
}
