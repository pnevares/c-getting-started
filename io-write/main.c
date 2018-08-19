#include <stdio.h>

int main() {
  char letters[] = "abcde";
  FILE *fpointer = fopen("data.txt", "w");

  printf("Writing lines into data.txt...\n");
  int i;
  for(i = 0; i < 5; i++) {
    fprintf(fpointer, "%c\n", letters[i]);
  }
  fclose(fpointer);

  return 0;
}
