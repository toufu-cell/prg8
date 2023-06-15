#include <stdio.h>
int main(int argc, const char* argv[]) {
  int a[3] = {0}, b[3] = {0}, x;
  for (int i = 0; i < 3; i++) {
    printf("a[%d]? ", i);
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 3; i++) {
    printf("b[%d]? ", i);
    scanf("%d", &b[i]);
  }
  for (int i = 0; i < 3; i++) {
    x = a[i] - b[i];
    printf("a[%d] - b[%d] = %d\n", i, i, x);
  }
  return 0;
}
