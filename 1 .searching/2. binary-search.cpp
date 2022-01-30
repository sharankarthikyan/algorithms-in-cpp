// Link: https://en.wikipedia.org/wiki/Big_O_notation#Orders_of_common_functions
// Best case: O(1) -> element found in the mid of the array.
// Average and Worst case: O(log n)

// NOTE: we need to pass a sorted array in binary search algorithm.

#include <array>
#include <iostream>

int binarySearch(std::array<int, 5> arr, int n, int x) {

  int left = 0;
  int right = n - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
  std::array<int, 5> arr{1, 2, 3, 4, 5};
  std::cout << "Element present in index: " << binarySearch(arr, arr.size(), 3)
            << std::endl;
  return 0;
}