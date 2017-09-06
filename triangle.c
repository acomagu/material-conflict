#include <stdio.h>

int triangle(int n) {
  int i, ans = 0;
  for(i = 0; i < n; i++) {
    ans += i;
  }
  return ans;
}

int main() {
  int ans = triangle(10);
  printf("Answer: %d", ans);
  return 0;
}
