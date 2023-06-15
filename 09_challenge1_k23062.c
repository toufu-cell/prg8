#include <stdio.h>
int main(int argc, const char* argv[]) {
  char ch;
  int isMinus, answer, inputNumber = 0;
  printf("equiation? ");
  while ((ch = getchar()) != '=') {
    if (ch == '-') {
      inputNumber = 1;
    }
  }

  return 0;
}