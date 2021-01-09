#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de decision
 * Numero par o impar
 */
int main(int argc, char** argv) {
    
    int x;
    
    printf("Introduce el primer valor: ");
    scanf("%d", &x);
    
    if(x % 2 == 0) {
        printf("El numero es par");
    }
    else {
        printf("El numero es impar");
    }
    
    

    return (0);
}

