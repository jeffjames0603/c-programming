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
    for (int j = 0; j < size - i - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }
  printf("Sorted numbers: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
  return 0;
}
