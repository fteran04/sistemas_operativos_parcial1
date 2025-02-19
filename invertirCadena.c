#include <stdio.h>

void invertirCadena(char cadena[]) {
    int longitud = 0;

    while (cadena[longitud] != '\0') {
        longitud++;
    }

    for (int i = 0; i < longitud / 2; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int main() {
    char cadena[100]; 
    printf("Ingresa una cadena: ");
    scanf("%s", cadena);

    invertirCadena(cadena);

    printf("Cadena invertida: %s\n", cadena);

    return 0;
}
