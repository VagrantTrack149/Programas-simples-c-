/*Nombre del Programa: Calculo de segundos en un numero de días
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA LOS SEGUNDOS EN NO. DE DIAS*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	float RAD, ALT, GEN, AB, AL, AT, VOL;
	system("cls");
	printf("\n PROGRAMA QUE CALCULA EL AREA DE LA BASE, EL AREA LATERAL, EL AREA TOTAL Y EL VOLUMEN DE UN CONO");
	printf("\n Introduzca el radio: ");
    scanf("%f",&RAD);
	printf("\n Introduzca la altura: ");
    scanf("%f",&ALT);
	printf("\n Introduzca la generatriz: ");
    scanf("%f",&GEN);
    AB = 3.1416*RAD*RAD;
	AL = 3.1416*RAD*GEN;
	AT = AB + AL;
	printf("\n El area de la base es: %0.3f", AB);
	printf("\n El area lateral es: %0.3f", AL);
	printf("\n El area total es: %0.3f", AT);
	VOL = AB*ALT*0.33333;
	printf("\n El volumen es: %0.3f", VOL); 
	printf("\n\n");
	system("PAUSE");
    return 0; 
}
