#include <stdio.h>
#include <string.h>

typedef struct {
  unsigned int age;
  char name[50];
} myStruct;

int main(void) {
  // Need the struct keyword to create a member
  myStruct s1;

  s1.age = 22;
  // Originally: s1.name[] = "Chris"
  // Learned that you cannot assign strings, and you have to "copy" into them
  strlcpy(s1.name, "Chris", 6);

  printf("%s - Age %d\n", s1.name, s1.age);
}
