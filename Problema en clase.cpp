/*Nombre del Programa: Calificación final 
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 30/09/2020
Descripción: Problema  PROGRAMA QUE CALCULA LA CALIFICACIÓN FINAL*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	float ED1,ED2,Z,EP1,EP2,X,T,P,C;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA LA CALIFICACIÓN FINAL");
	printf("\n Introduzca la calificación del primer examen departamental(Calificación unicamente en base 100):");
    scanf("%f",&ED1); 
    printf("\n Introduzca la calificación del segundo examen departamental(Calificación unicamente en base 100):");
    scanf("%f",&ED2); 
    Z = ((ED1 + ED2)/2)*0.4;
    printf("\n Introduzca la calificación del primer examen parcial(Califaciación unicamente en base 100):");
    scanf("%f",&EP1); 
    printf("\n Introduzca la calificación del segundo examen parcial(Califaciación unicamente en base 100):");
    scanf("%f",&EP2); 
    X =((EP1 + EP2)/2)*0.3;
    printf("\n Introduzca la calificación de las tareas(no mayor a 20):");
    scanf("%f",&T);
	printf("\n Introduzca la calificación del proyecto(no mayor a 10):");
    scanf("%f",&P); 
    C = Z + X + T + P; 
	printf("\n la calificación final es: %0.3f", C); 
	if (C > 70)
		printf("\n Calificación aprobatoria");
	else 
		printf("\n Calificación reporbatoria");
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


