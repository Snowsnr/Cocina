#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palabras_de_amor[1000][100];

void escribir_palabras() {
    FILE *fileA = fopen("amor.csv", "a+");
    if (!fileA) {
        perror("No se pudo abrir el archivo de amor");
        return;
    }

    printf("Escribe palabras de amor para agregar al archivo (máximo 999 caracteres):\n");
    char entrada[1000];
    scanf(" %[^\n]", entrada);

    fprintf(fileA, "%s\n", entrada);
    fflush(fileA);

    fclose(fileA); // Cerramos el archivo después de escribir
}

void leer_palabras_amor() {
    FILE *fileA = fopen("amor.csv", "r");
    if (!fileA) {
        perror("No se pudo abrir el archivo de amor");
        return;
    }

    char amor[100000];
    int contA = 0;

    while (fgets(amor, sizeof(amor), fileA)) {
        char *pchA;
        pchA = strtok(amor, " .,-");
        while (pchA != NULL) {
            strcpy(palabras_de_amor[contA], pchA);
            pchA = strtok(NULL, " .,-");
            contA += 1;
        }
    }

    fclose(fileA); // Cerramos el archivo después de leer
}

int main() {
    //escribir_palabras();
    leer_palabras();

    for (int i = 0; i <3; i++) {
        printf("%s\n", palabras_de_amor[i]);
    }

    return 0;
}