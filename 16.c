#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void area1();
void area2();
void area3();

/*
 * Estructuras de codigo (funciones)
 * Menu de conversion de areas
 */
int main(int argc, char** argv) {
  int opcion;
   
    do{
        opcion = 0;
        system("cmd /c cls");
        printf("Seleccione la opcion deseada:\n");
        printf("1 - Obtener el area de un rectangulo\n");
        printf("2 - Obtener el area de un triangulo\n");
        printf("3 - Obtener el area de un circulo\n");
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
            area1();            
            break;
        }
        case 2 :{
            area2();
            break;
        }
        case 3 :{
            area3();
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

void area1(){
    printf("\nIntroduce la base: ");
    float base = 0;
    scanf("%f", &base);
    printf("\nIntroduce la altura: ");
    float altura = 0;
    scanf("%f", &altura);
    float rectangulo = base * altura;
    printf("\nEl area del rectangulo es: %f \n",rectangulo);
    system("cmd /c pause");
}
void area2(){
    printf("\nIntroduce la base: ");
    float base = 0;
    scanf("%f", &base);
    printf("\nIntroduce la altura: ");
    float altura = 0;
    scanf("%f", &altura);
    float triangulo = (base * altura)/2;
    printf("\nEl area del triangulo es: %f \n", triangulo);
    system("cmd /c pause");
}
void area3(){
    float pi = 3.1416;
    printf("\nIntroduce el radio: ");
    float radio = 0;
    scanf("%f", &radio);
    
    float circulo = (radio * radio) * pi;
    printf("\nEl area del circulo es: %f \n", circulo);
    system("cmd /c pause");
}