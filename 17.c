#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void rectangulo();
void triangulo();
void circulo();

/*
 * Estructuras de codigo (funciones)
 * Menu de conversion de perimetros
 */
int main(int argc, char** argv) {
  int opcion;
   
    do{
        opcion = 0;
        system("cmd /c cls");
        printf("Seleccione la opcion deseada:\n");
        printf("1 - Obtener el perimetro de un rectangulo\n");
        printf("2 - Obtener el perimetro de un triangulo\n");
        printf("3 - Obtener el perimetro de un circulo\n");
        printf("4 - Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opcion);
        
        verificar(opcion);
    }
    while(opcion != 4);
    
      
    return (0);
}

void verificar (int opcion){
    switch (opcion){
        case 1 :{
            rectangulo();            
            break;
        }
        case 2 :{
            triangulo();
            break;
        }
        case 3 :{
            circulo();
            break;
        }
        case 4 :{
            printf("El programa fue finalizado\n");
            break;
        }
        default:{
            printf("Esa opcion no existe\n");
            system("cmd /c pause");
            break;
        }
    }
      
}

void rectangulo(){
    printf("\nIntroduce el valor del lado grande: ");
    float lado1 = 0;
    scanf("%f", &lado1);
    printf("\nIntroduce el valor del lado pequeño: ");
    float lado2 = 0;
    scanf("%f", &lado2);
    float perimetro1 = (lado1 * 2)+(lado2 * 2);
    printf("\nEl perimetro del cuadrilatero es: %f \n",perimetro1);
    system("cmd /c pause");
}
void triangulo(){
    printf("\nIntroduce el valor del primer lado: ");
    float lado1 = 0;
    scanf("%f", &lado1);
    printf("\nIntroduce el valor del segundo lado: ");
    float lado2 = 0;
    scanf("%f", &lado2);
    printf("\nIntroduce el valor del tercer lado: ");
    float lado3 = 0;
    scanf("%f", &lado3);
    float perimetro2 = lado1 + lado2 + lado3;
    printf("\nEl perimetro del triangulo es: %f \n", perimetro2);
    system("cmd /c pause");
}
void circulo(){
    float pi = 3.1416;
    printf("\nIntroduce el valor del radio: ");
    float radio = 0;
    scanf("%f", &radio);
    float perimetro3 = (2 * pi) * radio;
    printf("\nEl perimetro del circulo es: %f \n", perimetro3);
    system("cmd /c pause");
}

