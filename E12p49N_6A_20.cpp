/*Nombre del Programa: Plantilla base  
Elabor�: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 26/09/2020
Descripci�n: Problema 3 */

#include <stdio.h>  
#include <stdlib.h> 
main() 
{
	float ED1, ED2, Z, EP1, EP2, X, T, P, C;
	printf("\n Introduzca la calificaci�n del primer examen departamental en base 10:");
    scanf("%f",&ED1);
    printf("\n Introduzca la calificaci�n del segundo examen departamental en base 10:");
    scanf("%f",&ED2);
    Z=(((ED1+ED2)/2)*0.4);
    printf("\n Introduzca la calificaci�n del primer examen parcial en base 10:");
    scanf("%f",&EP1);
    printf("\n Introduzca la calificaci�n del segundo examen parcial en base 10:");
    scanf("%f",&EP2);
    X=(((EP1+EP2)/2)*0.3);
    printf("\n Introduzca la calificaci�n de los trabajos y tareas con un maximo de 2:");
    scanf("%f",&T);
    printf("\n Introduzca la calificaci�n del proyecto con un maximo de 1:");
    scanf("%f",&P);
    C=(Z+X+T+P);
	printf("\n La calificaci�n final es: %0.3f", C);
    return 0; 
}
