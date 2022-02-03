// The Interpolation Search is an improvement over Binary Search for instances,
// where the values in a sorted array are uniformly distributed. Binary Search
// always goes to the middle element to check. On the other hand, interpolation
// search may go to different locations according to the value of the key being
// searched. For example, if the value of the key is closer to the last element,
// interpolation search is likely to start search toward the end side.

// Formula: pos = low + [ (x-arr[low])*(high-low) / (arr[high]-arr[low]) ]

// arr[] ==> Array where elements need to be searched
// x     ==> Element to be searched
// low    ==> Starting index in arr[]
// high    ==> Ending index in arr[]

#include <array>
#include <iostream>

int interpolationSearch(std::array<int, 5> arr, size_t n, int x) {
  size_t low = 0, high = n - 1, pos;

  while (low <= high && x >= arr[low] && x <= arr[high]) {
    pos = low + ((x - arr[low]) * (high - low) / (arr[high] - arr[low]));

    if (arr[pos] == x) {
      return pos;
    } else if (arr[pos] < x) {
      low = pos + 1;
    } else {
      high = pos - 1;
    }
  }
  return -1;
}

int main() {
  std::array<int, 5> arr{1, 2, 3, 4, 5};
  std::cout << "Element found at index: "
            << interpolationSearch(arr, arr.size(), 2) << std::endl;
  return 0;
}
