#include <stdio.h>
int main() {
  int arr[100];
  int n, index, value, i;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter %d elements: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the index where you want to insert the element: ");
  scanf("%d", &index);
  printf("Enter the value you want to insert: ");
  scanf("%d", &value);
  for (i = n; i > index; i--) {
    arr[i] = arr[i - 1];
  }
  arr[index] = value;
  n++;
  printf("Array after insertion: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
