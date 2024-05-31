/*Nombre del Programa:  Cantidad de dinero del trabajdor
Elaboró: Neil Otniel Moreno Rivera       No Lista:  20
Fecha: 25/10/2020
Descripción: PROGRAMA QUE CALCULA LA PAGA DEL TRABAJADOR SEGUN LAS HORAS QUE TRABAJO Y LA PAGA POR HORA*/

#include <stdlib.h>
#include <iostream>
main ()
{
	float cd, ht, ph;
	printf("PROGRAMA QUE CALCULA LA CANTIDAD DE DINERO QUE RECIBIRA UN TRABAJADOR POR SUS HORAS DE TRABAJO \n");
	printf("\nIngrese el valor de horas de trabajo: ");
	scanf("%f",&ht);
	printf("\nIngrese el valor de pago por hora: ");
	scanf("%f",&ph);
	cd=ht*ph;
	if(ht>40)
		cd=cd+(ht-40)*ph;
	if(ht>48)
		cd=cd+(ht-48)*ph;
	printf("\nLa paga a recibir por el trabajo es:%0.3f",cd);
	printf("\n\n");
	system ("pause");
}
