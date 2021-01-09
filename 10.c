#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de control
 * Factorial de un numero positivo y entero
 */
int main(int argc, char** argv) {
    int i = 1;
    int fact = 1;
    int num;
    
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    
    while (i < num){
        i=i+1;    
        fact=fact*i;
    }
    printf("El factor de %d es %d", num, fact);

    return (0);
}

