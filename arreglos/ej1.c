#include <stdio.h>

int main(int argc, char const *argv[]) {
  int z[20];
  int i = 0;

  while(i < 20) {
    printf("Ingrese numero: ");
    scanf("%d",&z[i]);
    i++;
  }

  i = 0;

  while(i < 20) {
    printf("%d\n",z[i]);
    i++;
  }

  return 0;
}