/*
En un hospital se hizo un análisis de los pacientes recibidos en los últimos 10 años 
con el objetivo de hacer una aproximación de los costos de internación por paciente. 
Según el tipo de enfermedad que aqueja se determino que los pacientes con edad entre 
12 y 25 años implican un costo adicional del 10%.
Enfermedad  Costo diario
Diabetes     $1500.00
Hipertensión     $1100.00
Cáncer   $2200.00
Realiza un algoritmo y un programa que pida al paciente sus datos (días hospitalizado, edad y tipo de
enfermedad) y le indique el costo total de internación del paciente
*/

#include <stdio.h>
#include <stdlib.h>
#define Diabetes 1500
#define Hipertension 1100
#define Cancer 2200
int main(){
    int edad,dias,enfermedad;
    float costo, adicional;
    printf("Ingresa la edad del paciente");
    scanf("%d",&edad);
    if(edad<0){
        printf("La edad es invalida");
    }else if(edad>=12 && edad<=25){
        printf("Ingresa los dias hospitalizado");
        scanf("%d",&dias);
        if(dias<=0){
            printf("Dato invalido");
        }else{
            printf("Elige el tipo de enfermedad del paciente\n1.Diabetes\n2.Hipertension\n3.Cancer");
            scanf("%d",&enfermedad);
            if(enfermedad==1){
                costo=((Diabetes*dias)+((Diabetes*10)*.1));
                printf("El costo es de %f",costo);
            }else if(enfermedad==2){
                costo=((Hipertension*dias)+((Hipertension*10)*.1));
                printf("El costo es de %f",costo);
            }else if(enfermedad==3){
                costo=((Cancer*dias)+((Cancer*10)*.1));
                printf("El costo es de %f",costo);
            }
        }
    }else{
        printf("Ingresa los dias hospitalizado");
        scanf("%d",&dias);
        if(dias<=0){
            printf("Dato invalido");
        }else{
           printf("Elige el tipo de enfermedad del paciente\n1.Diabetes\n2.Hipertension\n3.Cancer");
            scanf("%d",&enfermedad);
            if(enfermedad==1){
                costo=(Diabetes*dias);
                printf("El costo es de %f",costo);
            }else if(enfermedad==2){
                costo=(Hipertension*dias);
                printf("El costo es de %f",costo);
            }else if(enfermedad==3){
                costo=(Cancer*dias);
                printf("El costo es de %f",costo);
            }
        }
        
    }
    return 0;
}