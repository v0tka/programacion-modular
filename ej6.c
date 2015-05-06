#include <stdio.h>

int main(int argc, char const *argv[]) {
	int matriz[3][3];
	int mayor = 0;
	int fila = 0;
	int columna = 0;
	int i = 0;
	int j = 0;

	while(i < 3) {
		while(j < 3) {
			printf("Ingrese numero: ");
			scanf("%d",&matriz[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	i = 0;
	j = 0;

	while(i < 3) {
		while(j < 3) {
			if(matriz[i][j] > mayor) {
				mayor = matriz[i][j];
				fila = i;
				columna = j;
			}
			j++;
		}

		j = 0;
		i++;
	}

	printf("El numero mayor es: %d ubicada en la fila %d, columna %d\n",mayor,fila,columna);

	return 0;
}