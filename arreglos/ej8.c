#include <stdio.h>

int main() {
    int matriz[5][5] = {{0}};
    int i = 0;
    int j = 0;

    while(i < 5) {
        while(j < 5) {
            if( i == j) {
                matriz[i][j] = 1;
            }
            printf("[%d]",matriz[i][j] );
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }

    return 0;
}