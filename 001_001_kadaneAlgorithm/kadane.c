#include <stdio.h>

int getMaxSumSubArray(int *arr, int length) {
  int sum = 0;
  int maxSum = 0;
  int start = 0;
  int end = 0;
  // i is the subarry start point
  for (int i = 0; i < length; i++) {
    sum += arr[i];
    if (sum > maxSum) {
      maxSum = sum;
        end = i + 1; // Start from 1
    }
    if (sum < 0) {
      sum = 0;
      start = i + 1; // Strat from the next item
      start += 1; // Start from 1 
    }
  }
  printf ("The maximum sum of sub-array is %d\n", maxSum);
  printf ("The maximum sum of sub-array is start from %d to %d\n", start, end);
  return maxSum;
}

int main() {
  int inputArray[] = {-1, -5, 3, -2, 4, 5, 2, 7, 4, 3, -9, 5, 3, 6, -9, -3};
  // Get a length of the inputArray
  int arrayLength = (int) (sizeof (inputArray) / sizeof (int));
  getMaxSumSubArray(inputArray, arrayLength);
}
