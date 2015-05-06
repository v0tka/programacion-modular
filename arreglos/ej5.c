#include <stdio.h>

int main() {
	int notas[20][4];
	int i = 0, j = 0;

	printf("Notas:\n");

	while(i < 20) {
		while(j < 4) {
			printf("Ingrese nota %d, alumno %d: ",j+1,i+1);
			scanf("%d",&notas[i][j]);
			j++;
		}
		j = 0;
		i++;
	}

	j = 0;
	i = 0;

	printf("Notas: \n");

	while(i < 20) {
		printf("Notas Alumno %d\n",i+1);
		while(j < 4) {
			printf("Nota Nro %d: %d\n",j+1,notas[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}

	return 0;
}