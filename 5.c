#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de decision
 * Calculo de areas
 */
int main(int argc, char** argv) {
    
    int x;
    float base;
    float altura;
    
    printf("1 - Area rectangulo");
    printf("\n2 - Area triangulo");
    printf("\n3 - Area circulo");
    printf("\nSeleccion: ");
    scanf("%d", &x);
    
    if (x == 1){
        float area1;
        
        printf("Introduce la base: \n");
        scanf("%f", &base);
        printf("Introduce el altura: \n");
        scanf("%f", &altura);
        area1 = base * altura;
        printf("El area es: %f", area1);
    }
    else if( x == 2){
        float area2;
        
        printf("Introduce la base: \n");
        scanf("%f", &base);
        printf("Introduce el altura: \n");
        scanf("%f", &altura);
        area2 = (base * altura)/2;
        printf("El area es: %f", area2);
        
    }
    else if( x == 3){
        float area3;
        float radio;
        float pi = 3.1416;
        
        printf("Introduce el valor del radio: ");
        scanf("%f", &radio);
        area3 = (radio*radio)*(pi);
        printf("El area es: %f", area3);
        
    }
    else if(x>3){
        printf("Esa opcion no existe");
    }
    

    return (0);
}

