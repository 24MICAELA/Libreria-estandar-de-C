#include <stdio.h>
#include "archivos.h"

// a. Usa la función fopen() para abrir un archivo de texto
void usar_fopen() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return;
    }
    fclose(file);  // Cerrar el archivo
}

// b. Escribe en un archivo de texto usando fprintf() y lee usando fscanf()
void usar_fprintf_fscanf() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("No se pudo abrir el archivo para escritura.\n");
        return;
    }
    fprintf(file, "Hola, mundo!\n");  // Escribir en el archivo
    fclose(file);  // Cerrar el archivo

    // Leer del archivo
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return;
    }
    char buffer[50];
    fscanf(file, "%s", buffer);  // Leer la primera palabra
    printf("Leido del archivo: %s\n", buffer);
    fclose(file);  // Cerrar el archivo
}
