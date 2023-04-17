/*
 Diseña un algoritmo y un programa que calcule el saldo neto mensual 
 (saldo bruto -impuestos) de los empleados de una empresa cuyo 
 trabajo se paga por horas. El saldo bruto se calcula:
• Las horas inferiores a 40 horas se pagan a una tarifa de $250 por hora.
• Cada hora adicional a la hora 40 se pagarán cómo extra a un costo 
de 1.5 horas normales.
Los impuestos a deducir varían en función de su saldo bruto:
◦ Si el saldo bruto es menor a $8000, libre de impuestos.
◦ Si el sueldo bruto esta entre $8000 y $10000 , el 5%
◦ Si el sueldo bruto es mayor a $10000, el 10%
Pide al usuario que introduzca cuántas horas laboró al mes y realiza 
el calculo. Si las horas son negativas solo muestra un 
mensaje indicando que es un dato incorrecto.
*/

#include <stdio.h>
#include <stdlib.h>
#define sueldo_fijo 250
#define sueldo_horas_extra 375
#define impuestos_5 .05
#define impuestos_10 .1

int main(){
int horas,horas_extra;
float sueldo_bruto,sueldo_neto;
    printf("Ingresa la cantidad de horas trabajadas\n");
    scanf("%d",&horas);
    if(horas<0){
        printf("Las horas no pueden ser negativas\n");
        exit(0);
    }

    if(horas>=0 && horas<=40){
        sueldo_bruto=horas*sueldo_fijo;
        printf("El sueldo bruto es de:$%f\n",sueldo_bruto);
    }else{
        horas_extra=horas-40;
        sueldo_bruto=(horas-horas_extra)*sueldo_fijo;
        sueldo_bruto=sueldo_bruto+(horas_extra*sueldo_horas_extra);
        printf("El sueldo bruto es de:$%f\n",sueldo_bruto);
    }

    if(sueldo_bruto<8000){
        printf("El sueldo neto es de:$%f\n",sueldo_bruto);
    }else if(sueldo_bruto>=8000 && sueldo_bruto<=10000){
        sueldo_neto=sueldo_bruto-(sueldo_bruto*impuestos_5);
        printf("El sueldo neto es de:$%f\n",sueldo_neto);
    }else{
       sueldo_neto=sueldo_bruto-(sueldo_bruto*impuestos_10);
       printf("El sueldo neto es de:$%f\n",sueldo_neto); 
    }
    return 0;
}