
#ifndef GPA_H
#define GPA_H
#include <stdio.h>

struct person {
  char name[20];
  int age;
  double GPA;
};

static struct person compareTo(struct person p1, struct person p2);
extern void find_the_person(struct person persons[], int len);


#endif

