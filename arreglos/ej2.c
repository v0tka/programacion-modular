#include <stdio.h>

int main() {
  int A[10];
  int B[10];
  int i = 0;

  while(i < 10) {
    A[i] = 1;
    B[i] = 0;
    i++;
  }

  i = 0;

  while(i < 10) {
    printf("%d\n",A[i]);
    i++;
  }

  i = 0;

  while(i < 10) {
    printf("%d\n",B[i]);
    i++;
  }

  return 0;
}