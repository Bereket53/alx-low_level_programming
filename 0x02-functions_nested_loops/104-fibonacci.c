#include <stdio.h>

/**
  * main - Prints the first 100 fibonacci numbers
  *
  * Return: Nothing!
  */
int main() {

  int i;
  int n = 100;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // print the first two terms t1 and t2
  printf("%d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
