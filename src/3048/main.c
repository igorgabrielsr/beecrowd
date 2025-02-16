#include <stdio.h>

int main() {
  int n, count = 1;
  scanf("%d", &n);
  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }
  for (int i = 0; i < n - 1; i++) {
    if (v[i] != v[i + 1]) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}