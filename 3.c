#include <stdio.h>
#include <stdlib.h>

/*
 Estructuras de decision
 Mayor entre 3 numeros
 */
int main(int argc, char** argv) {
    
    int x;
    int y;
    int z;
    
    printf("Introduce el valor de x: \n");
    scanf("%d", &x);
    printf("Introduce el valor de y: \n");
    scanf("%d", &y);
    printf("Introduce el valor de z: \n");
    scanf("%d", &z);
    
    if (x > y && x > z){
        printf("El numero mayor entre los tred numeros es x: %d", x);
    }
    else if (y > x && y > z){
        printf("El numero mayor entre los tres numeros es y: %d", y);
    }
    else if (z > y && z > x){
        printf("El numero mayor entre los tres numeros es z: %d", z);
    }
    else if (x == y && x == z){
        printf("Todos los numeros son iguales: %d", x);
    }

    return (0);
}

