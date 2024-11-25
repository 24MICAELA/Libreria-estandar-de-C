#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "funciones_comunes.h"

// a. Utiliza la función abs() para calcular el valor absoluto de un número entero
void usar_abs() {
    int num = -10;
    int abs_num = abs(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);

    num = 20;  // Probar con un número positivo
    abs_num = abs(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);
}

// b. Usa la función rand() para generar un número aleatorio
void usar_rand() {
    srand(time(0));  // Inicializa la semilla con el tiempo actual
    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);
}
