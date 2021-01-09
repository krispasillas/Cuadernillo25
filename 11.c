#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de Almacenamiento (arreglos)
 * Media aritmetica de "n" cantidad de datos introducidos por el usuario
 */
int main(int argc, char** argv) {
    
    int x = 0;
    int n = 10;
    
    printf("Ingrese la cantidad de datos que utilizara: ");
    scanf("%d", &n);
    float arreglo[n];
    
    for(x; x<n; x++){
         printf("Ingrese la calificacion: ");
         scanf("%f", &arreglo[x]);
    }
    
    x = 0;
    float suma = 0;
            for ( x; x<n; x++)
            {
                suma = suma + arreglo[x];
            }

    printf("\nLa media aritmetica es %f: ", suma/n);
    return (0);
}

