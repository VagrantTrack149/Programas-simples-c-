/*Nombre del Programa: Calificaci�n final 
Elabor�: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 30/09/2020
Descripci�n: Problema  PROGRAMA QUE CALCULA LA CALIFICACI�N FINAL*/

#include <stdio.h>  
#include <stdlib.h> 
      
int main() 
{
	float ED1,ED2,Z,EP1,EP2,X,T,P,C;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA LA CALIFICACI�N FINAL");
	printf("\n Introduzca la calificaci�n del primer examen departamental(Calificaci�n unicamente en base 100):");
    scanf("%f",&ED1); 
    printf("\n Introduzca la calificaci�n del segundo examen departamental(Calificaci�n unicamente en base 100):");
    scanf("%f",&ED2); 
    Z = ((ED1 + ED2)/2)*0.4;
    printf("\n Introduzca la calificaci�n del primer examen parcial(Califaciaci�n unicamente en base 100):");
    scanf("%f",&EP1); 
    printf("\n Introduzca la calificaci�n del segundo examen parcial(Califaciaci�n unicamente en base 100):");
    scanf("%f",&EP2); 
    X =((EP1 + EP2)/2)*0.3;
    printf("\n Introduzca la calificaci�n de las tareas(no mayor a 20):");
    scanf("%f",&T);
	printf("\n Introduzca la calificaci�n del proyecto(no mayor a 10):");
    scanf("%f",&P); 
    C = Z + X + T + P; 
	printf("\n la calificaci�n final es: %0.3f", C); 
	if (C > 70)
		printf("\n Calificaci�n aprobatoria");
	else 
		printf("\n Calificaci�n reporbatoria");
	printf("\n\n");
	system("PAUSE");
    return 0; 
}


