/*Nombre del Programa: Calculo del area, perimetro y altura de un triangulo equilatero
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 3/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA el area, perimetro y altura*/

#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>
#include <math.h>
int main() 
{
	float L, ALT,AREA,PERIMETRO;
	setlocale (LC_CTYPE,"Spanish");
	system("cls");
	printf("\n PROGRAMA QUE CALCULA CON EL LADO, EL AREA, ALTURA Y PERIMETRO DE UN TRIANGULO EQUILATERO");
	printf("\n Introduzca el lado del triangulo: ");
    scanf("%f",&L);
    ALT = pow((L*L)+(L/2*L/2),1.0/2.0);
	AREA = L*ALT/2;
	PERIMETRO = L*3;
	printf("\n La altura del triangulo es: %0.3f", ALT); 
	printf("\n El area del triangulo es: %0.3f", AREA);
	printf("\n El perimetro del triangulo es: %0.3f", PERIMETRO);
	printf("\n\n");
	system("PAUSE");
    return 0; 
}
