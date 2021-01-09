#include <stdio.h>
#include <stdlib.h>

/*
 * Apuntadores
 * Division de dos numeros por medio de apuntadores y que diga su direccion de memoria
 */
int main(int argc, char** argv) {
    
    float x, y, z;
    
    printf("Introduce el valor del primer numero: ");
    scanf("%f", &x);
    printf("Ahora el valor del segundo numero: ");
    scanf("%f", &y);
    z = x / y;
    printf("\nNumero 1 / Numero 2 = %f\n", z);
    
    printf("\nPor medio de punteros: \n");
    float *punt1, *punt2, *punt3;
    
    punt1 = &x;
    punt2 = &y;
    printf("Puntero 1 / Puntero 2 = %f\n", *punt1 / *punt2);
    
    punt3 = &z;
    printf("\nDireccion de memoria del primer numero es: %p\n",punt1);
    printf("Direccion de memoria del segundo numero es: %p\n",punt2);
    printf("Direccion de memoria de la operacion es: %p\n",punt3);
    

    return (0);
}