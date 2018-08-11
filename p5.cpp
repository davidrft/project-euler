#include <stdio.h>
#include <vector>

int smallest_multiple(int n) {
  if (n <= 1)
    return n;

  std::vector<int> numbers_array = {2};
  int result = 2;

  for (int i = 3; i <= n; i++) {
    int candidate = i;
    for (int j = 0; j < numbers_array.size(); j++) {
      if (!(candidate % numbers_array[j])) {
        candidate /= numbers_array[j];
        if (candidate == 1)
          break;
      }
    }
    numbers_array.push_back(candidate);
    result *= candidate;
  }

  return result;
}

int main() {
  printf("Result: %d", smallest_multiple(20));
  return 0;
}