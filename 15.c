#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de Almacenamiento (arreglos)
 * Numeros primos entre el 1 y 100
 */
int main(int argc, char** argv) {
     int x,cont,z,i;
     int tabla[100];
           
     i=0;
     for (x=1;x<=100;x++){
         cont=0;
         for (z=1;z<=x;z++){
             if (x%z==0){
                 cont++;
             }
         }
       
         if (cont == 2 || z == 1 || z == 0){
             tabla[i]= x;
             i++;
         }
     }      
     for (x=0;x<i;x++){
         printf("%d\n",tabla[x]);
     }
     
        return (0);
}

