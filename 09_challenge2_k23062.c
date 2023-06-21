#include <stdio.h>
int main(int argc, const char* argv[]) {
  char ch;
  int isMinus = 1, answer = 0, inputNumber = 0;
  printf("equation? ");
  while ((ch = getchar()) != '\n') {
    if (ch >= '0' && ch <= '9') {
      inputNumber = inputNumber * 10 + (int)ch - '0';
    }  // chが0〜9のときchをASCIIから-48する,連続で入力した時入力された数だけ繰り上げる
    if (inputNumber != 0 && ch == ' ') {
      switch (isMinus) {
        case 1:
          answer += inputNumber;
          break;
        case 0:
          answer -= inputNumber;
      }
    }
    switch (ch) {
      case '+':
        isMinus = 1;
        inputNumber = 0;
        break;
      case '-':
        isMinus = 0;
        inputNumber = 0;
        break;

      default:
        break;
    }
  }
  printf("answer: %d\n", answer);
  return 0;
}