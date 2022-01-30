// Best case: O(1)
// Worst case: O(√n)

// Binary search is better than Jump search

// NOTE: we need to pass a sorted array in jump search algorithm
#include <array>
#include <cmath>
#include <iostream>

int jumpSearch(std::array<int, 5> arr, int n, int x) {

  // 1. Take square root for size of an array.
  int step = std::sqrt(n);

  // 2. Find the block, where the element is persent.
  int prev = 0;
  while (arr[std::min(step, n) - 1] < x) {
    prev = step;
    step += std::sqrt(n);
    if (prev >= n) {
      return -1;
    }
  }

  // 3. Do linear search for x in block.
  // begin with prev
  while (arr[prev] < x) {
    prev++;

    // If we reached next block or end of an array.
    if (prev == std::min(step, n)) {
      return -1;
    }
  }

  // If element found
  if (arr[prev] == x) {
    return prev;
  }

  return -1;
}

int main() {
  std::array<int, 5> arr{1, 2, 3, 4, 5};
  std::cout << "Element present in index: " << jumpSearch(arr, arr.size(), 5);
  return 0;
}