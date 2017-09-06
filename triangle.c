#include <stdio.h>

int main() {
  int i, ans = 0;
  for(i = 0; i < 100; i++) {
    ans += i;
  }
  printf("Answer: %d", ans);
  return 0;
}
