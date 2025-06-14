#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x;
    char *arreglo;

    
    printf("datos del arreglo: ");
    scanf("%d", &x);
    
    arreglo = (char *)malloc(x * sizeof(char));

    
    if (arreglo == NULL) exit (1);

    
    for (int i = 0; i < x; i++) {
        printf("datos %d: ", i);
        scanf("%d", (arreglo + i));
    }

    
    printf("Los valores son:\n");
    for (int i = 0; i < x; i++) {
        printf("arreglo[%d] = %d\n", i, *(arreglo + i));
    }

    
    free(arreglo);

    return 0;
}