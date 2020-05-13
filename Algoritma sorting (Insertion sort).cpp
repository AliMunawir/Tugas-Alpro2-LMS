#include <math.h> 
#include <stdio.h> 
 
void insertionSort(int arr[], int n) 
{ 
  int i, key, j; 
  for (i = 1; i < n; i++) { 
    key = arr[i]; 
    j = i - 1; 
 
    while (j >= 0 && arr[j] > key) { 
      arr[j + 1] = arr[j]; 
      j = j - 1; 
    } 
    arr[j + 1] = key; 
  } 
} 
 
void printArray(int arr[], int n) 
{ 
  int i; 
  for (i = 0; i < n; i++) 
    printf("%d ", arr[i]); 
  printf("\n"); 
} 
 
int main() 
{ 
  int arr[] = { 1,82,4,11,29,5,20,11,8,10,3 }; 
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Array sebelum sorting :\n");
  printArray(arr,n);
  insertionSort(arr, n);
  printf("Array setelah sorting :\n");
  printArray(arr, n);
 
  return 0; 
}

