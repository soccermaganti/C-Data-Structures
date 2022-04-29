#include "gpa.h"

// A struct defined in this main.c file.
struct person the_person;

// A main function with a simple test.
// Correct output will display Alice.
int main() {
  struct person Alice = {"Alice Smith", 23, 3.5D};
  struct person Bob = {"Bob Jones", 22, 3.3D};
  struct person Alice2 = {"Alice2 Smith", 23, 4.0D};
  struct person Alice3 = {"Alice3 Smith", 24, 3.45D};
  struct person Alice4 = {"Alice4 Smith", 25, 3.76D};
  struct person Alice5 = {"Alice5 Smith", 26, 3.23D};
  the_person = (struct person){"Somebody Else", 100, 0.1D};
  struct person friends[] = {Alice, Bob,Alice2,Alice3,Alice4,Alice5};
  find_the_person(friends, 6);
  printf("find_the_person found: '%s', %d, %f\n", the_person.name,
         the_person.age, the_person.GPA);
  return 0;
}
