#include <stdio.h>
#include <stdlib.h>

/*
 * Apuntadores
 * Cambio de valor de una variable de manera directa e indirecta y que diga su direccion de memoria
 */
int main(int argc, char** argv) {
    
    int valor = 0;
    
    printf("La variable contiene 0 como su unidad.\n");
    printf("Intoduce una nueva unidad para que se guarde en la variable: ");
    scanf("%d", &valor);
    printf("Se guardo con la siguiente unidad: %d\n", valor);
    
    int *puntero = &valor;
    printf("\nIntoduce una nueva unidad para que se guarde en la misma variable mediante el apuntador: ");
    scanf("%d", &*puntero);
    printf("Se guardo con la siguiente unidad mediante el apuntador: %d\n", valor);
    
    
    printf("\nDicho valor se encuentra guardado en el siguiente espacio de memoria: %p\n", &valor);
    printf("Mientras que el puntero esta guardado en: %p\n", &puntero);
    
    
    return (0);
}