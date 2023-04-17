/*
Diseña un algoritmo y un programa que convierta un número del 1 al 10 en su
correspondiente al sistema numérico romano, indicando cual es este número romano. Si introduce un
número que no este en el rango del 1 al 10, solo muestra un mensaje indicando que es un valor
incorrecto.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    printf("Introduce un numero del 1 al 10\n");
    scanf("%d",&numero);

    switch(numero){
        case 1:
            printf("El equivalante en sistema numerico romano del numero %d es: I\n",numero);
        break;
        case 2:
            printf("El equivalante en sistema numerico romano del numero %d es: II\n",numero);
        break;
        case 3:
            printf("El equivalante en sistema numerico romano del numero %d es: II\n",numero);
        break;
        case 4:
            printf("El equivalante en sistema numerico romano del numero %d es: IV\n",numero);
        break;
        case 5:
            printf("El equivalante en sistema numerico romano del numero %d es: V\n",numero);
        break;
        case 6:
            printf("El equivalante en sistema numerico romano del numero %d es: VI\n",numero);
        break;
        case 7:
            printf("El equivalante en sistema numerico romano del numero %d es: VII\n",numero);
        break;
        case 8:
            printf("El equivalante en sistema numerico romano del numero %d es: VIII\n",numero);
        break;
        case 9:
            printf("El equivalante en sistema numerico romano del numero %d es: IX\n",numero);
        break;
        case 10:
            printf("El equivalante en sistema numerico romano del numero %d es: X\n",numero);
        break;  
        default:
            exit(0);
    }      
    return 0;
}