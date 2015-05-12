#include <stdio.h>

int main()
{
  int mayor = 0;
  int menor = 0;
  int suma_multiplos_10 = 0;
  int suma_multiplos_5 = 0;
  int entrada = 0; // Para leer lo que ingresa el usuario

  printf("Ingrese un numero: ");
  scanf("%d",&entrada);

  mayor = entrada;
  menor = entrada;

  while(entrada != 0) {
    printf("Ingrese un numero: ");
    scanf("%d", &entrada);

    if(entrada % 10 == 0) {
      suma_multiplos_10 = suma_multiplos_10 + entrada;
    }

    if(entrada % 5 == 0) {
      suma_multiplos_5 = suma_multiplos_5 + entrada;
    }

    if(entrada > mayor) {
      mayor = entrada;
    }

    if(entrada < menor) {
      menor = entrada;
    }

  }


  printf("La suma de los multiplos de 10 es: %d\n",suma_multiplos_10);
  printf("La suma de los multiplos de 5 es: %d\n",suma_multiplos_5);
  printf("El numero mayor es: %d\n",mayor);
  printf("El numero menor es: %d\n",menor);

  return 0;
}