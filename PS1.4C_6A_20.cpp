/*Nombre del Programa: Calculo de cambio 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA EL CAMBIO*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	float PRE, PAG, C;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA EL CAMBIO");
	printf("\n Introduzca el costo del articulo: ");
    scanf("%f",&PRE); 
    printf("\n Introduzca la cantidad de dinero: ");
    scanf("%f",&PAG); 
    C = PAG-PRE; 
	printf("\n El cambio (En caso de mostrarse un resultado negativo, falta dinero) es: %0.3f", C); 
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


