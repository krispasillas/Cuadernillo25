#include <stdio.h>
#include <stdlib.h>

/*
 * Estructuras de control
 * Numero de un mes y muestra el nombre  
 */
int main(int argc, char** argv) {
    int x;
    
    printf("Introduce el numero del mes que quieres conocer: ");
    scanf("%d", &x);
    do {

        if (x==1){
            printf("Este es el mes de Enero");
            break;
        }
        else if (x==2){
            printf("Este es el mes de Febrero");
            break;
        }
        else if (x==3){
            printf("Este es el mes de Marzo");
            break;
        }
        else if (x==4){
            printf("Este es el mes de Abril");
            break;
        }
        else if (x==5){
            printf("Este es el mes de Mayo");
            break;
        }
        else if (x==6){
            printf("Este es el mes de Junio");
            break;
        }
        else if (x==7){
            printf("Este es el mes de Julio");
            break;
        }
        else if (x==8){
            printf("Este es el mes de Agosto");
            break;
        }
        else if (x==9){
            printf("Este es el mes de Septiembre");
            break;
        }
        else if (x==10){
            printf("Este es el mes de Octubre");
            break;
        }
        else if (x==11){
            printf("Este es el mes de Noviembre");
            break;
        }
        else if (x==12){
            printf("Este es el mes de Diciembre");
            break;
        }
    } while (x>0 && x<13);

    return (0);
}

