#include <math.h>
#include <stdio.h>

bool is_prime(long number) {
  long sqrt_number = sqrt(number);
  for (int i = 2; i < sqrt_number; i++) {
    if (number % i == 0)
      return false;
  }

  return true;
}

long largest_prime(long long number) {
  long i = 2;

  while (true) {
    if (is_prime(i)) {
      if (number % i == 0) {
        number /= i;
        printf("%d \n", i);
      }
      if (number == 1)
        return i;
    }
    i++;
  }
}

int main() {
  printf("Result: %ld", largest_prime(600851475143));
  return 0;
}