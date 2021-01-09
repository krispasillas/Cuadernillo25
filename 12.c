#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de Almacenamiento (arreglos)
 * Rellenar cada arreglo con los primeros "n" numeros de menor a mayor
 */
int main(int argc, char** argv) {
    
    int n;
    
    printf("Ingrese la cantidad de datos que utilizara: ");
    scanf("%d", &n);
    int x,tabla[n];
           
            for(x=1;x<=n;x++){
        tabla[x]=x;
        printf("%d\n",tabla[x]);
    }
    printf("\n-------------------------------------------------------------");  
    printf("\nEstos son los primeros %d valores en orden de menor a mayor", n);
    printf("\n-------------------------------------------------------------\n");

    return (0);
}

