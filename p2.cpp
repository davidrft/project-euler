#include <algorithm>
#include <assert.h>
#include <numeric>
#include <stdio.h>
#include <vector>

bool is_even(const int &value) { return !(value % 2); }

int fibonaccis_sum(int max) {
  std::vector<int> fibonacci_vector = {1, 2};
  int aux = 0;
  int result = 0;

  while (fibonacci_vector[1] < max) {
    aux = fibonacci_vector[1];
    fibonacci_vector[1] = fibonacci_vector[1] + fibonacci_vector[0];
    fibonacci_vector[0] = aux;

    if (is_even(fibonacci_vector[0]))
      result += fibonacci_vector[0];
  }

  return result;
}

int main() { printf("Result: %d", fibonaccis_sum(4e6)); }