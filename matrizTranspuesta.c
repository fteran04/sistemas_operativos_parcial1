#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void transpuesta(int matriz[FILAS][COLUMNAS], int resultado[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[j][i] = matriz[i][j]; 
        }
    }
}

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int resultado[COLUMNAS][FILAS]; 

    transpuesta(matriz, resultado);

    printf("Matriz original:\n");
    imprimirMatriz(FILAS, COLUMNAS, matriz);

    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(COLUMNAS, FILAS, resultado);

    return 0;
}
