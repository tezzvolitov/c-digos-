#include <stdio.h>
#include <time.h>

int main() {
    clock_t inicio, fin;
    double tiempo;

    inicio = clock(); // Guardar el tiempo antes de la ejecución

    // Código a medir
    for (int i = 0; i < 1000000; i++) {
        // Algún cálculo o operación
    }

    fin = clock(); // Guardar el tiempo después de la ejecución

    

    printf("El tiempo de ejecución fue: %f", tiempo);

    return 0;
}