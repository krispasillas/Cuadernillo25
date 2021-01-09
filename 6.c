#include <stdio.h>
#include <stdlib.h>

/*
 * Estructura de control
 * Suma, resta, producto y division de numeros positivos
 */
int main(int argc, char** argv) {
    int num1;
    
    printf("Introduce un valor positivo: ");
    scanf("%d", &num1);
    
    while(num1>=0){
            int num2;
            int suma, resta, producto, division;
            
            printf("Introduce el un segundo valor: ");
            scanf("%d", &num2);
            
            if(num2>0){
                suma = num1 + num2;
                printf("\nSuma de los numeros: %d", suma);
            
                resta = num1 - num2;
                printf("\nResta de los numeros: %d", resta);
            
                producto = num1 * num2;
                printf("\nProducto de los numeros: %d", producto);
            
                division = num1 / num2;
                printf("\nDivision de los numeros: %d", division);
            }
            else {
                printf("Es un valor Negativo, introduce un valor Positivo: ");
                scanf("%d", &num2);
                
                suma = num1 + num2;
                printf("\nSuma de los numeros: %d", suma);
            
                resta = num1 - num2;
                printf("\nResta de los numeros: %d", resta);
            
                producto = num1 * num2;
                printf("\nProducto de los numeros: %d", producto);
            
                division = num1 / num2;
                printf("\nDivision de los numeros: %d", division);
            }
            break;
    }
    if (num1<0){
        printf("El numero es Negativo");
    }

    return (0);
}


