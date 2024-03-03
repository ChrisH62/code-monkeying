#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *file = fopen("Test.txt", "w");
  if (file == NULL) {
    return 1;
  }
  char *buffer = malloc(sizeof(char));
  if (buffer == NULL) {
    return 1;
  }
  // This writes the entire alphabet to the file
  for (int i = 0; i < 26; i++) {
    *buffer = i + 65;
    fwrite(buffer, 1, 1, file);
  }

  fclose(file);
  free(buffer);
}
