#include <stdio.h>
#include <string.h>

int main()
{
  char entrada[4];
  int longitud = 0;
  int i;

  printf("Ingrese un numero: ");
  scanf("%s",entrada);

  longitud = strlen(entrada) - 1;

  printf("%s -> ",entrada);
  for(i = longitud; i >= 0; i--) {
    printf("%c",entrada[i]);
  }
  printf("\n");

  return 0;
}