#include <stdio.h>

int main() {
	int matriz_a[3][3];
	int matriz_b[3][3];
	int suma[3][3];
	int i = 0;
	int j = 0;

	printf("Numeros Matriz A\n");
	while(i < 3) {
		while(j < 3) {
			printf("Ingrese numero: ");
			scanf("%d",&matriz_a[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

    i = 0;
    j = 0;

	printf("Numeros matriz B\n");
	while(i < 3) {
		while(j < 3) {
			printf("Ingrese numero: ");
			scanf("%d",&matriz_b[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

    i = 0;
    j = 0;

    printf("Suma\n");
	while(i < 3) {
		while(j < 3) {
            suma[i][j] = matriz_a[i][j] + matriz_b[i][j];
            printf("[%d]",suma[i][j]);
			j++;
		}
        printf("\n");
		j = 0;
		i++;
	}

	return 0;
}