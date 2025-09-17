// 1. Largest Element in an array

#include <bits/stdc++.h>
using namespace std;

int Large(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int max = Large(arr, n);
  cout << "The Largest Element in the array is " << max << endl;
}

// 2. Second Largest Element in an array
// Second Smallest Element in an array

#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n) {
  if (n < 2)
    return -1;

  int small = INT_MAX;
  int Ssmall = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (arr[i] < small) {
      Ssmall = small;
      small = arr[i];
    }

    else if (arr[i] < Ssmall && arr[i] != small) {
      Ssmall = arr[i];
    }
  }
  return Ssmall;
}

int secondLargest(int arr[], int n) {
  if (n < 2)
    return -1;

  int large = INT_MIN;
  int Slarge = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (arr[i] > large) {
      Slarge = large;
      large = arr[i];
    }

    else if (arr[i] > Slarge && arr[i] != large) {
      Slarge = arr[i];
    }
  }
  return Slarge;
}

int main() {
  int arr[] = {1, 2, 4, 7, 7, 5};
  int n = 6;
  int Sl = secondLargest(arr, n);
  int Ss = secondSmallest(arr, n);

  cout << "The second largest element is " << Sl << endl;
  cout << "The second smallest element is " << Ss << endl;
  return 0;
}

// 3. Check if Array is Sorted

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;

  cout << (isSorted(arr, n) ? "True" : "False") << endl;
}

// 4. Remove Duplicate from an array

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main() {
  int arr[] = {1, 1, 2, 2, 2, 3, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

// 5. Left Rotate the Array by One

#include <bits/stdc++.h>
using namespace std;

void Lefty(int arr[], int n) {
  int temp = arr[0];
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  Lefty(arr, n);
  return 0;
}

// 6. Left Rotate by K places

#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[], int start, int end) {
  while (start <= end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}

void Rotate(int arr[], int n, int k) {

  Reverse(arr, 0, k - 1);
  Reverse(arr, k, n - 1);
  Reverse(arr, 0, n - 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotate(arr, n, k);
  cout << " After rotating it by 2 elements :" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

// 7. Move all Zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
  int j = -1;
  // place the pointer j:
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      j = i;
      break;
    }
  }

  // no non-zero elements:
  if (j == -1)
    return a;

  // Move the pointers i and j
  // and swap accordingly:
  for (int i = j + 1; i < n; i++) {
    if (a[i] != 0) {
      swap(a[i], a[j]);
      j++;
    }
  }
  return a;
}

int main() {
  vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  int n = 10;
  vector<int> ans = moveZeros(n, arr);
  for (auto &it : ans) {
    cout << it << " ";
  }
  cout << '\n';
  return 0;
}

// 8. Linear Search

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int num) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      return i;
    }
  }
  return -1; // Element not found
}

int main() {
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num = 4;
  int n = sizeof(arr) / sizeof(arr[0]);
  int val = search(arr, n, num);
  cout << "The element is found at index :" << val << endl;
}

//  9. Union of Two Arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0;  // pointers
  vector<int> Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}

int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  vector<int> Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto &val : Union)
    cout << val << " ";
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

// 10. Miissing Number in an array

// (Brute Force Approach)
#include <bits/stdc++.h>
using namespace std;

int MissingNum(int arr[], int n){
  for(int i=1; i<n; i++){
    int flag = 0;

    for(int j = 0; j < n-1; j++){
      if(arr[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if(flag == 0)
    return i;
  }
  return -1;
}

int main() {
  int n = 8;
  int arr[] ={1, 2, 4, 5, 6, 7, 8};
  int ans = MissingNum(arr, n);
  cout <<" The missing element in the array is " << ans << endl;
  return 0;
}


// (Optimal Approach)
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

// 11. Maximum Consecutive 1's

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums) {
      int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }

        maxi = max(maxi, cnt);
      }
      return maxi;  
    }
};

int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}

// 12. Find the number that appears once, and the other numbers twice

#include <bits/stdc++.h>
using namespace std;

int getSingle(vector <int> & arr) {
  int n = arr.size();

  int xorr = 0;
  for(int i =0; i < n; i++) {
    xorr = xorr ^ arr[i];
  }
  return xorr;

}

int main() {
  vector <int> arr = {4, 1, 2, 1, 2};
  int ans = getSingle(arr);
  cout << "The single element is "<< ans<< endl;
  return 0;
}

// 13. Longest Subarray with given Sum K(Positives)

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
