#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j) { // Loop until the two pointers cross.
    while (arr[i] <= pivot && i <= high - 1) {
      i++; // Move i right until it finds a number greater than the pivot
    }

    while (arr[j] > pivot &&
           j >= low + 1) { // Move j left until it finds a number less than or
                           // equal to the pivot
      j--;
    }
    if (i < j)
      swap(arr[i],
           arr[j]); // If i and j haven’t crossed, swap the wrong elements.
  }
  swap(arr[low], arr[j]); // Finally, put the pivot in its correct position.
  return j;
}

void qs(vector<int> &arr, int low, int high) {
  if (low < high) { // Only sort if there’s more than one element.
    int pIndex = partition(arr, low, high);
    qs(arr, low, pIndex - 1);
    qs(arr, pIndex + 1, high);
  }
}

vector<int> quickSort(vector<int> arr) {
  qs(arr, 0, arr.size() - 1);
  return arr;
}

int main() {
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  int n = arr.size();
  cout << " Before Quick Sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  arr = quickSort(arr);
  cout << " After Quick Sort" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
