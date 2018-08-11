#include <assert.h>
#include <stdio.h>

int find_sum_of_multiples_below_n(int a, int b, int max) {
  int sum = 0;
  for (int i = 0; i < max; i++) {
    if (i % a == 0 || i % b == 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  printf("Result: %d", find_sum_of_multiples_below_n(3, 5, 1000));
  return 0;
}