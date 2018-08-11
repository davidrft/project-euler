#include <math.h>
#include <stdio.h>

int sum_of_first(int n) { return n * (n + 1) / 2; }

int sum_of_first_square(int n) { return (n * (n + 1) * (2 * n + 1)) / 6; }

int main() {
  printf("Result: %d",
         (int)pow(sum_of_first(100), 2) - sum_of_first_square(100));
  return 0;
}