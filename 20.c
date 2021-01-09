#include <stdio.h>
#include <stdlib.h>

void verificar(int);
void AtmaPa();
void TorraPa();
void BaraPa();

/*
 * Estructuras de codigo (funciones)
 * Menu de conversion de presiones
 */
int main(int argc, char** argv) {
    int opcion;
   
    do{
        opcion = 0;
        system("cmd /c cls");
        printf("Seleccione la opcion deseada:\n");
        printf("1 - Convertir Atmosferas Pascales\n");
        printf("2 - Convertir Torr a Pascales\n");
        printf("3 - Convertir Bar a Pascales\n");
        printf("4- Salir\n");
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
            AtmaPa();            
            break;
        }
        case 2 :{
            TorraPa();
            break;
        }
        case 3 :{
            BaraPa();
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

void AtmaPa(){
    printf("\nIntroduce la cantidad en Atm: ");
    float atm = 0;
    scanf("%f", &atm);
    float resultado1 = atm * 101325;
    printf("\nEl resultado es: %f Pa\n",resultado1);
    system("cmd /c pause");
}
void TorraPa(){
    printf("\nIntroduce la cantidad en Torr: ");
    float torr = 0;
    scanf("%f", &torr);
    float resultado2 = torr * 133.322;
    printf("\nEl resultado es: %f Pa\n",resultado2);
    system("cmd /c pause");
}
void BaraPa(){
    printf("\nIntroduce la cantidad en Bar: ");
    float bar = 0;
    scanf("%f", &bar);
    float resultado3 = bar * 100000;
    printf("\nEl resultado es: %f Pa\n",resultado3);
    system("cmd /c pause");
}

