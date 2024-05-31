/*Nombre del Programa: Calculo de area y perimetro de un circulo 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA EL AREA Y EL PERIMETRO DE UN CIRCULO*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	float RAD, PAG, C, B;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA EL AREA Y PERIMETRO DE UN CIRCULO");
	printf("\n Introduzca el radio(Este tiene que ser mayor a 0): ");
    scanf("%f",&RAD); 
    C = RAD*RAD*3.1416; 
    B = RAD*2*3.1416;
	printf("\n El area del circulo es: %0.3f", C); 
	printf("\n El perimetro del circulo es: %0.3f", B); 
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


