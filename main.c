#include <stdio.h>
#include "funciones_comunes.h"
#include "cadenas.h"
#include "archivos.h"

int main() {
    // 1. Funciones comunes del lenguaje C (<stdlib.h>)
    usar_abs();
    usar_rand();

    // 2. Cadenas (<string.h>)
    usar_strcmp();
    usar_strlen();

    // 3. Archivos (<stdio.h>)
    usar_fopen();
    usar_fprintf_fscanf();

    return 0;
}
