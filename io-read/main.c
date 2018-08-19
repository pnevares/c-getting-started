#include <stdio.h>

int main() {
  char *ptr;
  char line[20];
  FILE *fpointer = fopen("data.txt", "r");

  printf("Reading from data.txt...\n");

  ptr = fgets(line, 20, fpointer);
  while(ptr != NULL) {
    printf("%s", line);
    ptr = fgets(line, 20, fpointer);
  }

  printf("End of file reached\n");
  fclose(fpointer);

  return 0;
}
