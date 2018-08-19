#include <stdio.h>
#include <string.h>

struct Student{
  char name[20];
  char major[20];
  int age;
  double gpa;
};

int main() {
  struct Student joe;
  joe.age = 18;
  joe.gpa = 4.1;
  strcpy(joe.major, "Political Science");
  strcpy(joe.name, "Joe Smith");

  printf("I know a student with a %s major named %s.\n", joe.major, joe.name);
  printf("%s has a %lf gpa and is %d years old.\n", joe.name, joe.gpa, joe.age);

  return 0;
}
