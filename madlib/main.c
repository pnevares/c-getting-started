#include <stdio.h>

int main() {
  char color[20];
  char noun1[20];
  char noun2[20];

  printf("Enter a color: ");
  scanf("%s", color);
  printf("Enter a noun: ");
  scanf("%s", noun1);
  printf("Enter another noun: ");
  scanf("%s", noun2);

  printf("Your %s looks like my brother's %s %s!\n", noun1, color, noun2);

  return 0;
}
