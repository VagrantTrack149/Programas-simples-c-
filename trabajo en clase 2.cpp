/*Nombre del Programa: Etapas de la vida
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 7/10/2020
Descripción: Problema  PROGRAMA QUE CALCULA LA ETAPA SEGUN TU EDAD*/

#include <stdio.h>  
#include <stdlib.h> 
#include <math.h>      
int main() 
{
	float edad;
	
	system("cls");
	printf("\n PROGRAMA QUE CALCULA SEGUN lA EDAD EN QUE ETAPA ESTAS DE TU VIDA");
	printf("\n Introduzce la edad: ");
    scanf("%f",&edad); 
    if (edad<=12)
    {
    	
    	printf("La etapa es niñez");
	}
	else
	{
		if (edad<=17)
		{
			
			printf("La etapa es adolescencia");
		 } 
		 else
		 {
		 	if (edad>=18 && edad<=80)
		 	{
			 printf("La etapa es la adultez");
			 }
		 	else
		 	{
		 		printf("La etapa es vejez");
			 }
		 }
	}
	printf("\n\n\n");	
	system("PAUSE");
    return 0; 
}

