#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
  return (*(int *)b - *(int *)a);
}
int main() {
  int n, m, i;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter the value of M: ");
  scanf("%d", &m);
  printf("Enter the value of N: ");
  scanf("%d", &n);
  qsort(arr, n, sizeof(int), compare);
  int MthMax = arr[m - 1];
  int NthMin = arr[n - 1];
  int sum = MthMax + NthMin;
  int difference = MthMax - NthMin;
  printf("The %d maximum number is: %d\n", m, MthMax);
  printf("The %d minimum number is: %d\n", n, NthMin);
  printf("The sum of the %dth maximum and %dth minimum numbers is: %d\n", m, n, sum);
  printf("The difference between the %dth maximum and %dth minimum numbers is: %d\n", m, n, difference);
  return 0;
}
