#include <iostream>
using namespace std;

#define FILAS 3
#define COLUMNAS 3

void transpuesta(int matriz[FILAS][COLUMNAS], int resultado[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[j][i] = matriz[i][j]; 
        }
    }
}

void imprimirMatriz(int filas, int columnas, int* matriz) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << *((matriz + i * columnas) + j) << "\t";
        }
        cout << endl;
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

    cout << "Matriz original:\n";
    imprimirMatriz(FILAS, COLUMNAS, (int*)matriz);

    cout << "\nMatriz transpuesta:\n";
    imprimirMatriz(COLUMNAS, FILAS, (int*)resultado);

    return 0;
}
