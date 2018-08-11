#include <math.h>
#include <stdio.h>

bool is_palindrome(int n) {
  int mirror = 0;
  int original = n;

  while (n) {
    mirror = mirror * 10 + n % 10;
    n /= 10;
  }
  return mirror == original;
}

long largest_palindrome(int digits) {
  int lowerbound = pow(10, digits - 1);
  int upperbound = pow(10, digits) - 1;
  int max = 0;

  for (int i = upperbound; i >= lowerbound; i--) {
    for (int j = i; j >= max / i; j--) {
      if (is_palindrome(i * j))
        max = i * j;
    }
  }

  return max;
}

int main() {
  printf("Result: %ld", largest_palindrome(3));
  return 0;
}