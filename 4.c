#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de decision
 * Estado fisico del agua
 */
int main(int argc, char** argv) {
    
    float temp;
    
    printf("Introduce la temperatura del agua: ");
    scanf("%f", &temp);
    
    if (temp <= 0){
        printf("El agua esta en estado solido");
    }
    else if (temp > 0 && temp < 100){
        printf("El agua esta en estado liquido");
    }
    else if (temp >= 100){
        printf("El agua esta en estado gaseoso");
    }

    return (0);
}


