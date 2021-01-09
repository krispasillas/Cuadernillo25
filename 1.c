#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de decision
 * Numero positivo o negativo
 */
int main(int argc, char** argv) {
    
    int x;
    
    printf("Introduce el primer valor: ");
    scanf("%d", &x);
    
    if(x>0) {
        printf("El numero es positivo");
    }
    else if(x<0) {
        printf("El numero es negativo");
    }
    

    return (0);
}
