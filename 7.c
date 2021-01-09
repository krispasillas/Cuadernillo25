#include <stdio.h>
#include <stdlib.h>

/*
 * Estructura de control
 * Suma, resta, producto y division de numeros negativos
 */
int main(int argc, char** argv) {
    int num1;
    
    printf("Introduce un valor negativo: ");
    scanf("%d", &num1);
    
    while(num1<0){
            int num2;
            int suma, resta, producto, division;
            
            printf("Introduce el un segundo valor: ");
            scanf("%d", &num2);
            
            if(num2<0){
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
                printf("Es un valor Positivo, introduce un valor Negativo: ");
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
    if (num1>0){
        printf("El numero es Positivo");
    }

    return (0);
}

