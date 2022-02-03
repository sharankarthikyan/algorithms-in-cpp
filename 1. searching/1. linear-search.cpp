// Best case: O(1) -> element found in 0th index.
// Average case O(n/2) -> element found in the mid.
// Worst case: O(N) -> element found in last index or not found.

#include <array>
#include <iostream>

int linearSearch(std::array<int, 5> arr, size_t n, int x) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int main() {
  std::array<int, 5> arr{1, 2, 3, 4, 5};
  std::cout << "Element present in index: " << linearSearch(arr, arr.size(), 3)
            << std::endl;
  return 0;
}