/*정리 알고리즘 정리본*/

#include <iostream>
#include <vector>
using namespace std;

// 1. Merge Sort, O(N * log N), requires memory as many as the number of data but stable

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<int>& arr, int left, 
                     int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 2. Heapsort, O(N * log N), known as unstable
void heapSort(int arr[], int N)
{

    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    // One by one extract an element
    // from heap
    for (int i = N - 1; i > 0; i--) {

        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
void heapify(int arr[], int N, int i)
{

    // Initialize largest as root
    int largest = i;

    // left = 2*i + 1
    int l = 2 * i + 1;

    // right = 2*i + 2
    int r = 2 * i + 2;

    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest
    // so far
    if (r < N && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
// quick sort, usually O(N * log N) but worst case is O(N^2)
void quickSort(int *data, int start, int end) {
  if (start >= end) return;
  int pivot = start;  // 기준 값
  int i = start + 1;
  int j = end;

  while (i <= j) {
    while (data[i] <= data[pivot])  // 키 값보다 큰 값 만날때까지 오른쪽으로 이동
      i++;
    while (data[j] >= data[pivot] && j > start)  // 키 값보다 작은 값 만날 때까지 왼쪽으로 이동
      j--;
    if (i > j)  //현재 엇갈린 상태면 pivot 값 교체
    {
      int temp = data[j];
      data[j] = data[pivot];
      data[pivot] = temp;
    } 
    else 
    {
      int temp = data[j];
      data[j] = data[i];
      data[i] = temp;
    }
    // 재귀 호출
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
  }
}