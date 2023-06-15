#include <math.h>
#include <stdio.h>
int main(int argc, const char* argv[]) {
  double x, y;
  int selected, w;
  printf("x? ");
  scanf("%lf", &x);
  printf("--- menu ---\n");
  printf("1: 絶対値, 2: 二乗, 3: 三乗\n");
  printf("menu no? ");
  scanf("%d", &selected);
  switch (selected) {
    case 1:
      y = fabs(x);
      printf("|%lf| = %lf\n", x, y);
      break;
    case 2:
      w = 2;
      y = pow(x, w);
      printf("%lf ^ %d = %lf\n", x, w, y);
      break;
    default:
      w = 3;
      y = pow(x, w);
      printf("%lf ^ %d = %lf\n", x, w, y);
      break;
  }
  return 0;
}
