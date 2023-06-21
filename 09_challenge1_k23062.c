#include <stdio.h>
int main(int argc, const char* argv[]) {
  char ch;
  int isMinus = 1, answer = 0, inputNumber = 0;
  printf("equiation? ");
  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case ' ':
      //' 'のとき何もしない
      case '=':
        // =のとき何もしない
        break;
      case '+':
        isMinus = 1;  //+のときisMinusに１
        break;
      case '-':  //-のときisMinusに０
        isMinus = 0;
        break;
      default:
        inputNumber = (int)ch - '0';  // chをASCIIコードから-48する
        if (isMinus == 1) {
          answer += inputNumber;  //+の処理
        } else if (isMinus == 0) {
          answer -= inputNumber;  //-の処理
        }
        isMinus = 1;
        break;
    }
  }
  printf("answer: %d\n", answer);

  return 0;
}