#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
  int number1, number2, result;
  char operator;

  printf("수식을 입력하세요(예> 1 + 2): ");
  scanf("%d %c %d", &number1, &operator, &number2);

  switch (operator)
  {
    case '+':
      result = add(a, b);
      break;

    case '-':
      result = sub(a, b);
      break;

    case '*':
      result = multi(a, b);
      break;

    case '/':
      result = div(a, b);
      break;
  }

  printf("result is %d.\n", result);

  return 0;
}
