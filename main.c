#include <stdio.h>

int bound_and(int, int);
int bound_mod(int, int);

int main() {
  printf("%d\n", bound_and(10, 32));
  printf("%d\n", bound_mod(10, 32));
}