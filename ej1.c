/*
INSTRUCCIONES
Diseña un algoritmo y un programa que pida al usuario introduzca un número de a lo
más 3 dígitos (contempla números positivos y números negativos) y muéstrale en pantalla de cuantos
dígitos es su número y si es positivo o negativo. Si el número tiene más de 3 dígitos SOLO muestra
un mensaje que indique que el número no es válido.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero;
    printf("Ingresa el numero\n");
    scanf("%d",&numero);
    if(numero<=-1000 || numero>=1000){
        printf("El numero no es valido\n");
        exit(0);
    }else if((numero<=999 && numero>=100) || (numero>=-999 && numero<=-100)){
        printf("El numero tiene 3 digitos\n");
    }else if((numero<=99 && numero>=10) || (numero>=-99 && numero<=-10)){
        printf("El numero tiene 2 digitos\n");
    }else if((numero<=9 && numero>=0) || (numero>=-9 && numero<=0)){
        printf("El numero tiene 1 digito\n");
    }
    if(numero<0){
        printf("El numero %d es negativo\n",numero);
    }else{
        printf("El numero %d es positivo\n",numero);
    }
    return 0;
}