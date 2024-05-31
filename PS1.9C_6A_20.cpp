/*Nombre del Programa: Calculo de cambio 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA EL CAMBIO*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	int DIAS, SEG;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA LOS SEGUNDOS QUE HAY EN CIERTO NO. DE DIAS");
	printf("\n Introduzca la cantidad de dias: ");
    scanf("%d",&DIAS); 
    SEG = DIAS*86400;
	printf("\n La cantidad de segundos en %d dias es: %0.3d", DIAS, SEG); 
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


