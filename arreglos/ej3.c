#include <stdio.h>

int main() {
  int arreglo[50];
  int i = 0;

  while(i < 50) {
    printf("Ingrese numero: ");
    scanf("%d",&arreglo[i]);
    i++;
  }

  i = 0;

  i = 49;
  while(i >= 0) {
    printf("%d\n",arreglo[i]);
    i--;
  }

  return 0;
}