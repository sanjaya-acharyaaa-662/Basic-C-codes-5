#include <stdio.h>

int main() {

  int size = 5;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    // print number
    int num = 1;
    for (int k = 0; k < 2*i+1; k++) {
      if (i == 0 || i == size-1) {
        printf("%d", num++);
      } else {
        if (k == 0 || k == 2*i) {
          printf("%d", num++);
        } else {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}
