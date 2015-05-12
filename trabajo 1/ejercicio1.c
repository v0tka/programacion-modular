#include <stdio.h>

int main()
{
  int mayor = 0; // Para guardar el numero mayor
  int menor = 0; // Para guardar el numero menor
  int suma_multiplos_10 = 0; // Para guardar la suma de los multiplos de 10
  int suma_multiplos_5 = 0; // Para guardar la suma de los multiplos de 5
  int entrada = 0; // Para leer lo que ingresa el usuario

  // Lectura de un numero
  printf("Ingrese un numero: ");
  scanf("%d",&entrada);

  // Asignacion a las variables menor y mayor para despues hacer comparaciones
  mayor = entrada;
  menor = entrada;

  // Mientras lo que ingrese el usuario sea diferente que 0
  while(entrada != 0) {
    printf("Ingrese un numero: ");
    scanf("%d", &entrada);

    if(entrada != 0) {
      // Si lo que ingreso el usuario es multiplo de 10
      if(entrada % 10 == 0) {
        suma_multiplos_10 = suma_multiplos_10 + entrada;
      }

      // Si lo que ingreso el usuario es multiplo de 5
      if(entrada % 5 == 0) {
        suma_multiplos_5 = suma_multiplos_5 + entrada;
      }

      // Para comprobar si la entrada es mayor que el mayor
      if(entrada > mayor) {
        mayor = entrada;
      }

      // Para comprobar si la entrada es menor que el meno
      if(entrada < menor) {
        menor = entrada;
      }
    }
  }

  printf("La suma de los multiplos de 10 es: %d\n",suma_multiplos_10);
  printf("La suma de los multiplos de 5 es: %d\n",suma_multiplos_5);
  printf("El numero mayor es: %d\n",mayor);
  printf("El numero menor es: %d\n",menor);

  return 0;
}