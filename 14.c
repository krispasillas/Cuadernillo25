#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de Almacenamiento (arreglos)
 * Ordenar datos tanto negativos como positivos de menor a mayor
 */
int main(int argc, char** argv) {
    
    int aux, numeros[10];
    int i,j,n=10;

    for (i=0;i<n;i++){
        printf("Introduce el valor: ");
        scanf("%d",&numeros[i]);
        
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(numeros[i]<numeros[j]){
              aux=numeros[i];
              numeros[i]=numeros[j];
              numeros[j]=aux;
            }
        }
    }
 
    for (i=n-1;i>=0;i--){
        printf("%d\n",numeros[i]);
    }

    return (0);
}

