#include <stdio.h>

int searching(int size, int arr[]) {
  int i;
  for (i = 0; i < size; i++) {
    if (arr[i] == 20) {
      return 1;
    }
  }

  return 0;
}

int main() {
  int size, i, value;
  scanf("%d", &size);
  int arr[size];

  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int search_result = searching(size, arr);

  if (search_result == 1) {
    printf("o monu pawa gese\n");
  } else {
    printf("you have been slain\n");
  }

  return 0;
}
