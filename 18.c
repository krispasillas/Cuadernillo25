#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void CmaIn();
void MaFt();
void KmaMi();
void LaOz();

/*
 * Estructuras de codigo (funciones)
 * Menu de conversion de sistema de medidas
 */
int main(int argc, char** argv) {
    int opcion;
   
    do{
        opcion = 0;
        system("cmd /c cls");
        printf("Seleccione la opcion deseada:\n");
        printf("1 - Convertir Centimetros a Pulgadas\n");
        printf("2 - Convertir Metros a Pies\n");
        printf("3 - Convertir Kilometros a Millas\n");
        printf("4 - Convertir Litros a Onzas\n");
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
            CmaIn();            
            break;
        }
        case 2 :{
            MaFt();
            break;
        }
        case 3 :{
            KmaMi();
            break;
        }
        case 4 :{
            LaOz();
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

void CmaIn(){
    printf("\nIntroduce la cantidad en cm: ");
    float cm = 0;
    scanf("%f", &cm);
    float resultado1 = cm/2.54;
    printf("\nEl resultado es: %f in\n",resultado1);
    system("cmd /c pause");
}
void MaFt(){
    printf("\nIntroduce la cantidad en m: ");
    float m = 0;
    scanf("%f", &m);
    float resultado2 = m * 3.281;
    printf("\nEl resultado es: %f ft\n",resultado2);
    system("cmd /c pause");
}
void KmaMi(){
    printf("\nIntroduce la cantidad en km: ");
    float km = 0;
    scanf("%f", &km);
    float resultado3 = km/1.609;
    printf("\nEl resultado es: %f mi\n",resultado3);
    system("cmd /c pause");
}
void LaOz(){
    printf("\nIntroduce la cantidad en L: ");
    float L = 0;
    scanf("%f", &L);
    float resultado4 = L * 33.814;
    printf("\nEl resultado es: %f Oz\n",resultado4);
    system("cmd /c pause");
}