#include <stdio.h>
#include <stdlib.h>

/*
 * Apuntadores
 * Resta de dos numeros por medio de apuntadores y que diga su direccion de memoria
 */
int main(int argc, char** argv) {
    
    int x, y, z;
    
    printf("Introduce el valor del primer numero: ");
    scanf("%d", &x);
    printf("Ahora el valor del segundo numero: ");
    scanf("%d", &y);
    z = x - y;
    printf("\nNumero 1 - Numero 2 = %d\n", z);
    
    printf("\nPor medio de punteros: \n");
    int *punt1, *punt2, *punt3;
    
    punt1 = &x;
    punt2 = &y;
    printf("Puntero 1 - Puntero 2 = %d\n", *punt1-*punt2);
    
    punt3 = &z;
    printf("\nDireccion de memoria del primer numero es: %p\n",punt1);
    printf("Direccion de memoria del segundo numero es: %p\n",punt2);
    printf("Direccion de memoria de la operacion es: %p\n",punt3);
    

    return (0);
}