/*Nombre del Programa: Examen  2
Elaboró: N0eil Otniel Moreno Rivera       No Lista:  20
Fecha: 14/10/2020
Descripción: Área de un triangulo según sus cordenadas */

#include <stdio.h>  
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main() 
{
	float X1,Y1,X2,Y2,X3,Y3, AREA;
	setlocale (LC_CTYPE,"Spanish");
	printf("Programa que calcula el área de un triangulo según sus coordenadas");
	printf("\n Introduzca X1: ");
    scanf("%f",&X1);
	printf("\n Introduzca Y1: ");
    scanf("%f",&Y1);
	printf("\n Introduzca X2: ");
    scanf("%f",&X2);
	printf("\n Introduzca Y2: ");
    scanf("%f",&Y2);
	printf("\n Introduzca X3: ");
    scanf("%f",&X3);
	printf("\n Introduzca Y3: ");
    scanf("%f",&Y3);
	AREA = (1.0/2.0)*abs(X1*(Y2-Y3)+X2*(Y3-Y1)+(Y1-Y2));
	printf("\n El área del triangulo es: %0.3f", AREA);
	printf("\n\n");
	system("PAUSE");
    return 0; 
}
