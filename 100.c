#include <stdio.h>
#include <string.h>

int main() {
    char primero[100], segundo[100];
    int resultado;
    printf("primera palabra: ");
    scanf("%s", primero);
    printf(" segunda palabra: ");
    scanf("%s", segundo);
    resultado = strcmp(primero, segundo);
    if (resultado == 0) {
       printf("son iguales.\n");
    } else if (resultado > 0) {
      printf("palabra mayor es: %s\n", segundo);
      printf("palabra menor es: %s\n", primero);
    } else {
       printf("palabra mayor es: %s\n", segundo);
      printf("palabra menor es: %s\n", primero);
    }

    
    printf("su comparación es: %d\n", resultado);

    return 0;
}