#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void InaCm();
void FtaM();
void MiaKm();
void OzaL();

/*
 * Estructuras de codigo (funciones)
 * Menu de conversion de sistema de medidas (inverso)
 */
int main(int argc, char** argv) {
    int opcion;
   
    do{
        opcion = 0;
        system("cmd /c cls");
        printf("Seleccione la opcion deseada:\n");
        printf("1 - Convertir Pulgadas a Centimetros\n");
        printf("2 - Convertir Pies a Metros\n");
        printf("3 - Convertir Millas a Kilometros\n");
        printf("4 - Convertir Onzas a Litros\n");
        printf("5- Salir\n");
        printf("Seleccion: ");
        scanf("%d",&opcion);
        
        verificar(opcion);
    }
    while(opcion != 5);
    
      
    return (0);
}

void verificar (int opcion){
    switch (opcion){
        case 1 :{
            InaCm();            
            break;
        }
        case 2 :{
            FtaM();
            break;
        }
        case 3 :{
            MiaKm();
            break;
        }
        case 4 :{
            OzaL();
            break;
        }
        case 5 :{
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

void InaCm(){
    printf("\nIntroduce la cantidad en in: ");
    float in = 0;
    scanf("%f", &in);
    float resultado1 = in * 2.54;
    printf("\nEl resultado es: %f cm\n",resultado1);
    system("cmd /c pause");
}
void FtaM(){
    printf("\nIntroduce la cantidad en ft: ");
    float ft = 0;
    scanf("%f", &ft);
    float resultado2 = ft / 3.281;
    printf("\nEl resultado es: %f m\n",resultado2);
    system("cmd /c pause");
}
void MiaKm(){
    printf("\nIntroduce la cantidad en mi: ");
    float mi = 0;
    scanf("%f", &mi);
    float resultado3 = mi*1.609;
    printf("\nEl resultado es: %f km\n",resultado3);
    system("cmd /c pause");
}
void OzaL(){
    printf("\nIntroduce la cantidad en Oz: ");
    float oz = 0;
    scanf("%f", &oz);
    float resultado4 = oz / 33.814;
    printf("\nEl resultado es: %f L\n",resultado4);
    system("cmd /c pause");
}