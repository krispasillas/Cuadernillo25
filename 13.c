#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de Almacenamiento (arreglos)
 * Rellenar cada arreglo con los primeros "n" numeros de mayor a menor
 */
int main(int argc, char** argv) {
    
    int n;
    
    printf("Ingrese la cantidad de datos que utilizara: ");
    scanf("%d", &n);
    int x,tabla[n];
           
           
            for (x = n; x >= 1; x--){
        tabla[x]=x;
        printf("%d\n", tabla[x]);
    }
    
    printf("\n-------------------------------------------------------------");  
    printf("\nEstos son los primeros %d valores en orden de mayor a menor", n);
    printf("\n-------------------------------------------------------------\n");

    return (0);
}


