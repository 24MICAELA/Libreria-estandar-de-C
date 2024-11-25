#include <string.h>
#include <stdio.h>
#include "cadenas.h"

// a. Crea dos cadenas de caracteres y usa la función strcmp() para compararlas
void usar_strcmp() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);  // Comparar las cadenas
    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
}

// b. Usa la función strlen() para calcular la longitud de una cadena
void usar_strlen() {
    char str[] = "Hola mundo";  // Cadena de ejemplo
    int length = strlen(str);  // Calcular la longitud
    printf("La longitud de '%s' es: %d\n", str, length);
}
