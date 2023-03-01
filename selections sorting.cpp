#include <stdio.h>
int main() {
  int size;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);
  int numbers[size];
  printf("Enter %d numbers: ", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &numbers[i]);
  }
  for (int i = 0; i < size - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < size; j++) {
      if (numbers[j] < numbers[min_index]) {
        min_index = j;
      }
    }
    if (min_index != i) {
      int temp = numbers[min_index];
      numbers[min_index] = numbers[i];
      numbers[i] = temp;
    }
  }
  printf("Sorted numbers: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}
