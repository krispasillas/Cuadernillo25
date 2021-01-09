#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Estructuras de control
 * Juego de adivinar un numero entre el 0 y el 1000
 */
int main(int argc, char** argv) {
    int x = 1;
    int intento;
    int valor;
    
    int min=0;
    int max=1000;
    srand(time(NULL));
    
    
    valor = (rand() % (max-min+1))+min;
    
    
    
    printf("En este juego debes de adivinar un numero entre 0 y 1000");
    printf("\nIntroduce un numero: ");
    scanf("%d", &intento);
    
    
    do{   
    if(intento > valor && intento >= min){
        printf("El numero esta por encima, es incorrcto");
        printf("\nIntenta de nuevo: ");
        scanf("%d", &intento);
        
    }
    
    if(intento < valor && intento <= max){
        printf("El numero esta por debajo, es incorrcto");
        printf("\nIntenta de nuevo: ");
        scanf("%d", &intento);
    }
}while(intento != valor);


    do{
        printf("\n-------------------------------------------");
        printf("\nEl numero verdadero es %d, es correcto.",valor);
        printf("\nFelicidades!");
        printf("\n-------------------------------------------\n");
        break;
    } while (intento == valor);
    
    
    return (0);
}

