#include <stdio.h>

int main() {
  int empleados_a[10];
  int empleados_b[10];
  int i = 0;
  int mayor_a = 0;
  int mayor_b = 0;

  printf("Ingreso edades empleados Sucursal A\n");
  while(i < 10) {
    printf("Ingrese edad: ");
    scanf("%d",&empleados_a[i]);
    i++;
  }

  i = 0;

  printf("Ingreso edades empleados Sucursal B\n");
  while(i < 10) {
    printf("Ingrese edad: ");
    scanf("%d",&empleados_b[i]);
    i++;
  }

  i = 0;

  while(i < 10) {
    if(empleados_a[i] > mayor_a) {
      mayor_a = empleados_a[i];
    }

    if(empleados_b[i] > mayor_b) {
      mayor_b = empleados_b[i];
    }

    i++;
  }

  if(mayor_a > mayor_b) {
    printf("La edad mayor es de la sucursal A con: %d\n",mayor_a);
  } else {
    if (mayor_b > mayor_a) {
      printf("La edad mayor es de la sucursal B con: %d\n",mayor_b);
    } else {
      printf("Las mayores edad de las dos sucursales son iguales\n");
    }
  }


  return 0;
}