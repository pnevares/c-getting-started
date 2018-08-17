#include <stdio.h>

int main() {
  // string
  char name[20];
  printf("Enter your name: ");
  fgets(name, 20, stdin);
  printf("Hello %s\n!", name); // see newline from fgets

  // integer
  int year;
  printf("Enter your birth year: ");
  scanf("%d", &year);
  int age = 2018 - year;
  printf("You are %d years old!\n", age);

  // double
  double balance;
  printf("Enter your account balance: ");
  scanf("%lf", &balance);
  double balanceAfter = balance - 5;
  printf("Your balance after a $5 charge is %f\n", balanceAfter);

  return 0;
}
