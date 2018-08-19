#include <stdio.h>

int calculate(int, int, char);
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
  int a;
  int b;
  char operator;

  printf("Enter a math problem (ex: 5 * 2):\n");
  scanf("%d %c%d", &a, &operator, &b);

  printf("%d %c %d = %d\n", a, operator, b, calculate(a, b, operator));

  return 0;
}

int calculate(int a, int b, char operator) {
  switch (operator) {
    case '+':
      return add(a, b);
    case '-':
      return subtract(a, b);
    case '*':
      return multiply(a, b);
    case '/':
      return divide(a, b);
    default:
      return add(a, b);
  }
}

int add(a, b) {
  return a + b;
}

int subtract(a, b) {
  return a - b;
}

int multiply(a, b) {
  return a * b;
}

int divide(a, b) {
  return a / b;
}
