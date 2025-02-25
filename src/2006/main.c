#include <stdio.h>

int main() {
  int t, count;
  int arr[5];
  scanf("%d", &t);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] == t) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}
